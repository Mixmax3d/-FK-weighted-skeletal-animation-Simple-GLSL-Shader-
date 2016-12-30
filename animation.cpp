void Animated_Mesh::compute_animation(string mesh_name, string anim_name)
{

	int pippo = Animated_Mesh_enum.size();
	int pluto = animation_set.size();

	for (int t = 0 ; t  < pippo; t++)
	{
		string test = Animated_Mesh_enum[t].name;
		//cout << "nome animazione compute : "<< anim_name << endl;

		if (test == mesh_name)
		{

			for (int k = 0; k < pluto ; k++)
			{

				string test1 = animation_set[k].name;

				if (test1 == anim_name)
				{
					for (int i = 0; i < Animated_Mesh_enum[t].count_joint; i++)
					{

						string temp_bone = Animated_Mesh_enum[t].Skeleton_bone[i].bone_name;
						Animated_Mesh_enum[t].Skeleton_bone[i].tx = animation_set[k].key_frame_anim[mover+animation_set[k].time*(0+(i*6))]; 
						Animated_Mesh_enum[t].Skeleton_bone[i].ty = animation_set[k].key_frame_anim[mover+animation_set[k].time*(1+(i*6))]; 
						Animated_Mesh_enum[t].Skeleton_bone[i].tz = animation_set[k].key_frame_anim[mover+animation_set[k].time*(2+(i*6))]; 
						Animated_Mesh_enum[t].Skeleton_bone[i].rx = animation_set[k].key_frame_anim[mover+animation_set[k].time*(3+(i*6))]; 
						Animated_Mesh_enum[t].Skeleton_bone[i].ry = animation_set[k].key_frame_anim[mover+animation_set[k].time*(4+(i*6))]; 
						Animated_Mesh_enum[t].Skeleton_bone[i].rz = animation_set[k].key_frame_anim[mover+animation_set[k].time*(5+(i*6))]; 
	
					}

				}
			}



		}
	}
}
