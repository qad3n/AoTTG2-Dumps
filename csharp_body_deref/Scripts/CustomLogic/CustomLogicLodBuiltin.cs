using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002B7")]
[CompilerGenerated]
internal class CustomLogicLodBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002B8")]
	public static class Factory
	{
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x3CED040", Offset = "0x3CED040", VA = "0x3CED040")]
		public static CustomLogicLodBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002B9")]
	public static class Bindings
	{
		[Token(Token = "0x4000E06")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x3CED140", Offset = "0x3CED140", VA = "0x3CED140")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60012B3")]
		[Address(RVA = "0x3CED280", Offset = "0x3CED280", VA = "0x3CED280")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DistanceThreshold()
		{
			return null;
		}

		[Token(Token = "0x60012B4")]
		[Address(RVA = "0x3CED360", Offset = "0x3CED360", VA = "0x3CED360")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DetailPriority()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x38")]
	public LODGroup Value;

	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x4000E05")]
	[FieldOffset(Offset = "0x50")]
	private float _detailPriority;

	[Token(Token = "0x1700023B")]
	public float DistanceThreshold
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x3CECDB0", Offset = "0x3CECDB0", VA = "0x3CECDB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012A9")]
		[Address(RVA = "0x3CECDE0", Offset = "0x3CECDE0", VA = "0x3CECDE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700023C")]
	public float DetailPriority
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x3CECE60", Offset = "0x3CECE60", VA = "0x3CECE60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x3CECE70", Offset = "0x3CECE70", VA = "0x3CECE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public override string ClassName
	{
		[Token(Token = "0x60012AD")]
		[Address(RVA = "0x3CECFE0", Offset = "0x3CECFE0", VA = "0x3CECFE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60012AE")]
		[Address(RVA = "0x3CED010", Offset = "0x3CED010", VA = "0x3CED010", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023F")]
	public override bool IsStatic
	{
		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x3CED020", Offset = "0x3CED020", VA = "0x3CED020", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000240")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x3CED030", Offset = "0x3CED030", VA = "0x3CED030", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x3CECB20", Offset = "0x3CECB20", VA = "0x3CECB20")]
	public CustomLogicLodBuiltin()
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x3CECB30", Offset = "0x3CECB30", VA = "0x3CECB30")]
	public CustomLogicLodBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x3CECC60", Offset = "0x3CECC60", VA = "0x3CECC60")]
	public void SetupSingleLod(float threshold)
	{
	}
}
