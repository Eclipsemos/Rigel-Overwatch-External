#pragma once

namespace OW {
	namespace offset {
		static constexpr auto Address_viewmatrix_base = 0x36D4AD0; //viewmatrix xor
		static constexpr auto Address_viewmatrix_base_test = 0x3D97688; //viewmatrix
		static constexpr auto Address_entity_base = 0x36BFFA0; //entityadmin
		static constexpr auto offset_viewmatrix_ptr = 0x7E0; //pointer
		static constexpr auto offset_viewmatrix_xor_key = 0x741D6AD199C3D1DF; //vm key
		static constexpr auto HeapManager = 0x378D420; //heapmanagervar
		static constexpr auto HeapManager_Var = 0x3771CEF; //heapmanager
		static constexpr auto HeapManager_Key = 0x7080710E6A79AFE2; //same
		static constexpr auto HeapManager_Pointer = 0x160; // same
		static constexpr auto changefov = 0x3838358; //myFOV
		static constexpr auto GetKeyAdd = 0x1F6CC4B; //same
		static constexpr auto GetKeyAddRIP = 0x5;
		static constexpr auto GlowESP = 0x243B396; //
		static constexpr auto Silent = 0xF909A5; //
		static constexpr auto SensitivePtr = 0x2064;
		static constexpr auto VisFN = 0x7A07B2; //same
		static constexpr auto VisRead = 0x3905A80; //
		static constexpr auto Vis_Key = 0x248D9D283227B42F; //same
		static constexpr auto OutlineFN = 0x7A9AD2; //same
		static constexpr auto OutlineRead = 0x3905A80; //this is under decryptoutline function dwgamebase+, add offset::OutlineRead or leave alone
		static constexpr auto Outline_Key = 0x7262D99D2D2710C6; //same
	}
}