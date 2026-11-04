// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLodBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLodBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200043C")]
[CompilerGenerated]
internal class CustomLogicLodBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x200043D")]
	public static class Factory
	{
		[Token(Token = "0x6001CE7")]
		[Address(RVA = "0x1F07A50", Offset = "0x1F06050", VA = "0x181F07A50")]
		public static CustomLogicLodBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200043E")]
	public static class Bindings
	{
		[Token(Token = "0x4001510")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001CE8")]
		[Address(RVA = "0x1EEC640", Offset = "0x1EEAC40", VA = "0x181EEC640")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001CE9")]
		[Address(RVA = "0x1EFB750", Offset = "0x1EF9D50", VA = "0x181EFB750")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DistanceThreshold()
		{
			return null;
		}

		[Token(Token = "0x6001CEA")]
		[Address(RVA = "0x1EFB660", Offset = "0x1EF9C60", VA = "0x181EFB660")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DetailPriority()
		{
			return null;
		}
	}

	[Token(Token = "0x400150C")]
	[FieldOffset(Offset = "0x38")]
	public LODGroup Value;

	[Token(Token = "0x400150D")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x400150E")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x400150F")]
	[FieldOffset(Offset = "0x50")]
	private float _detailPriority;

	[Token(Token = "0x1700034A")]
	public float DistanceThreshold
	{
		[Token(Token = "0x6001CDD")]
		[Address(RVA = "0x1F06360", Offset = "0x1F04960", VA = "0x181F06360")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x1F06520", Offset = "0x1F04B20", VA = "0x181F06520")]
		set
		{
		}
	}

	[Token(Token = "0x1700034B")]
	public float DetailPriority
	{
		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x1F063A0", Offset = "0x1F049A0", VA = "0x181F063A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public override string ClassName
	{
		[Token(Token = "0x6001CE3")]
		[Address(RVA = "0x1F06330", Offset = "0x1F04930", VA = "0x181F06330", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001CE4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001CE5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001CE6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x1F06090", Offset = "0x1F04690", VA = "0x181F06090")]
	public CustomLogicLodBuiltin()
	{
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x1F060B0", Offset = "0x1F046B0", VA = "0x181F060B0")]
	public CustomLogicLodBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x1F05E80", Offset = "0x1F04480", VA = "0x181F05E80")]
	private static float GetDetailThreshold()
	{
		return default(float);
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x1F05F30", Offset = "0x1F04530", VA = "0x181F05F30")]
	public void SetupSingleLod(float threshold)
	{
	}
}
