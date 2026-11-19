// ==================== AoTTG2 cross-reference ====================
// Type: Photon.CustomSerialization
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Photon/CustomSerialization.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/CustomSerialization.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Photon;

[Token(Token = "0x2000905")]
internal class CustomSerialization
{
	[Token(Token = "0x60055B2")]
	[Address(RVA = "0x5CDC380", Offset = "0x5CDB380", VA = "0x5CDC380")]
	public static void Init()
	{
		// Lifted from source/cpp/Photon/CustomSerialization.c (Photon.CustomSerialization$$Init): clean
		CustomSerialization.Register();
		return;
	}

	[Token(Token = "0x60055B3")]
	[Address(RVA = "0x5CDC390", Offset = "0x5CDB390", VA = "0x5CDC390")]
	internal static void Register()
	{
		// Lifted from source/cpp/Photon/CustomSerialization.c (Photon.CustomSerialization$$Register): 2 lines keep C-only constructs
		Il2CppType handle;
		Type customType;
		SerializeMethod __this;
		DeserializeMethod __this_00;

		handle = TypeRef_UnityEngine_Color;
		customType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this = new SerializeMethod(null, (intptr_t)MethodInfo_Photon_CustomSerialization_SerializeColor);
		__this_00 = new DeserializeMethod(null, (intptr_t)MethodInfo_Photon_CustomSerialization_DeserializeColor);
		PhotonPeer.RegisterType(customType, 0x43, __this, __this_00);
		return;
	}

	[Token(Token = "0x60055B4")]
	[Address(RVA = "0x5CDC4B0", Offset = "0x5CDB4B0", VA = "0x5CDC4B0")]
	public static object DeserializeColor(byte[] data)
	{
		// Lifted from source/cpp/Photon/CustomSerialization.c (Photon.CustomSerialization$$DeserializeColor): 36 lines keep C-only constructs
		uint uVar1;
		byte[] auVar2 = new byte[14];
		uint uVar3;
		byte[] auVar4 = new byte[14];
		byte[] auVar5 = new byte[11];
		byte[] auVar6 = new byte[11];
		byte[] auVar7 = new byte[11];
		uint5 uVar8;
		byte[] auVar9 = new byte[11];
		byte[] auVar10 = new byte[11];
		byte[] auVar11 = new byte[14];
		uint6 uVar12;
		object pIVar13;
		byte[] auVar14 = new byte[16];
		byte[] local_18 = new byte[16];

		if (data == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)data.Length;
		if ((((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) || (uVar1 == 3)) {
			throw new IndexOutOfRangeException();
		}
		uVar3 = *(uint)data.m_Items;
		uVar8 = CONCAT41(SUB114(ZEXT811(0), 7), (char)((uint)uVar3 >> 0x18));
		auVar9._5_6_ = 0;
		auVar9._0_5_ = uVar8;
		auVar5[4] = (char)((uint)uVar3 >> 0x10);
		auVar5._0_4_ = uVar3;
		auVar5._5_6_ = SUB116(auVar9 << 0x30, 5);
		auVar10._7_4_ = 0;
		auVar10._0_7_ = auVar5._4_7_;
		auVar6[2] = (char)((uint)uVar3 >> 8);
		auVar6._0_2_ = (ushort)uVar3;
		auVar6._3_8_ = SUB118(auVar10 << 0x20, 3);
		auVar7._2_9_ = auVar6._2_9_;
		auVar7._0_2_ = (ushort)uVar3 & 0xff;
		auVar2._10_2_ = 0;
		auVar2._0_10_ = auVar7._0_10_;
		auVar2._12_2_ = (short)uVar8;
		uVar12 = CONCAT42(auVar2._10_4_, auVar5._4_2_);
		auVar11._6_8_ = 0;
		auVar11._0_6_ = uVar12;
		auVar4._4_2_ = auVar6._2_2_;
		auVar4._0_4_ = auVar7._0_4_;
		auVar4._6_8_ = SUB148(auVar11 << 0x40, 6);
		auVar14._0_4_ = (float)(auVar7._0_4_ & 0xffff);
		auVar14._4_4_ = (float)auVar4._4_4_;
		auVar14._8_4_ = (float)(int)uVar12;
		auVar14._12_4_ = (float)(auVar2._10_4_ >> 0x10);
		local_18 = divps(auVar14, _DAT_010052a0);
		return pIVar13;
	}

	[Token(Token = "0x60055B5")]
	[Address(RVA = "0x5CDC550", Offset = "0x5CDB550", VA = "0x5CDC550")]
	public static byte[] SerializeColor(object obj)
	{
		// Lifted from source/cpp/Photon/CustomSerialization.c (Photon.CustomSerialization$$SerializeColor): 3 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		uint uVar5;
		float pfVar6;
		Byte[] pSVar7;

		if (obj != null) {
			if ((obj.klass._1).element_class != (typeof(Color)._1).element_class) {
				throw new InvalidCastException();
			}
			pfVar6 = il2cpp_vm_Object_Unbox(obj);
			fVar1 = *pfVar6;
			fVar2 = pfVar6[1];
			fVar3 = pfVar6[2];
			fVar4 = pfVar6[3];
			pSVar7 = (Byte[])new byte[4];
			if (pSVar7 != null) {
				uVar5 = (uint)pSVar7.Length;
				if ((((uVar5 == 0) || (pSVar7[0] = (uint8_t)(int)(fVar1 * 255.0), uVar5 == 1)) ||(pSVar7[1] = (uint8_t)(int)(fVar2 * 255.0), uVar5 < 3)) ||(pSVar7[2] = (uint8_t)(int)(fVar3 * 255.0), uVar5 == 3)) {
					throw new IndexOutOfRangeException();
				}
				pSVar7[3] = (uint8_t)(int)(fVar4 * 255.0);
				return pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055B6")]
	[Address(RVA = "0x5CDC670", Offset = "0x5CDB670", VA = "0x5CDC670")]
	public CustomSerialization()
	{
		// Lifted from source/cpp/Photon/CustomSerialization.c (Photon.CustomSerialization$$.ctor): clean
		base();
		return;
	}
}
