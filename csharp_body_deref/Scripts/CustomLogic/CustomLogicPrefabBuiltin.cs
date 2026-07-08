using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x20002E6")]
[CompilerGenerated]
internal class CustomLogicPrefabBuiltin : BuiltinClassInstance, ICustomLogicToString
{
	[Token(Token = "0x20002E7")]
	public static class Factory
	{
		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x3D274F0", Offset = "0x3D274F0", VA = "0x3D274F0")]
		public static CustomLogicPrefabBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002E8")]
	public static class Bindings
	{
		[Token(Token = "0x4000EBF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x3D27690", Offset = "0x3D27690", VA = "0x3D27690")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x3D27C50", Offset = "0x3D27C50", VA = "0x3D27C50")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__AssetType()
		{
			return null;
		}

		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x3D27D30", Offset = "0x3D27D30", VA = "0x3D27D30")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Asset()
		{
			return null;
		}

		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x3D27E10", Offset = "0x3D27E10", VA = "0x3D27E10")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Active()
		{
			return null;
		}

		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x3D27EF0", Offset = "0x3D27EF0", VA = "0x3D27EF0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Static()
		{
			return null;
		}

		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x3D27FD0", Offset = "0x3D27FD0", VA = "0x3D27FD0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Visible()
		{
			return null;
		}

		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x3D280B0", Offset = "0x3D280B0", VA = "0x3D280B0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x3D28190", Offset = "0x3D28190", VA = "0x3D28190")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x3D28270", Offset = "0x3D28270", VA = "0x3D28270")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x3D28350", Offset = "0x3D28350", VA = "0x3D28350")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x3D28430", Offset = "0x3D28430", VA = "0x3D28430")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideMode()
		{
			return null;
		}

		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x3D28510", Offset = "0x3D28510", VA = "0x3D28510")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideWith()
		{
			return null;
		}

		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x3D285F0", Offset = "0x3D285F0", VA = "0x3D285F0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__PhysicsMaterial()
		{
			return null;
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x3D286D0", Offset = "0x3D286D0", VA = "0x3D286D0")]
		public static CLMethodBinding<CustomLogicPrefabBuiltin> __CreateMethodBinding__ClearComponents()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EBD")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptSceneObject Value;

	[Token(Token = "0x4000EBE")]
	[FieldOffset(Offset = "0x38")]
	public bool PersistsOwnership;

	[Token(Token = "0x1700031A")]
	public string AssetType
	{
		[Token(Token = "0x6001791")]
		[Address(RVA = "0x3D26CF0", Offset = "0x3D26CF0", VA = "0x3D26CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001792")]
		[Address(RVA = "0x3D26D10", Offset = "0x3D26D10", VA = "0x3D26D10")]
		set
		{
		}
	}

	[Token(Token = "0x1700031B")]
	public string Asset
	{
		[Token(Token = "0x6001793")]
		[Address(RVA = "0x3D26DC0", Offset = "0x3D26DC0", VA = "0x3D26DC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x3D26DE0", Offset = "0x3D26DE0", VA = "0x3D26DE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700031C")]
	public bool Active
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x3D26E40", Offset = "0x3D26E40", VA = "0x3D26E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001796")]
		[Address(RVA = "0x3D26E60", Offset = "0x3D26E60", VA = "0x3D26E60")]
		set
		{
		}
	}

	[Token(Token = "0x1700031D")]
	public bool Static
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x3D26EB0", Offset = "0x3D26EB0", VA = "0x3D26EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001798")]
		[Address(RVA = "0x3D26ED0", Offset = "0x3D26ED0", VA = "0x3D26ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700031E")]
	public bool Visible
	{
		[Token(Token = "0x6001799")]
		[Address(RVA = "0x3D26F20", Offset = "0x3D26F20", VA = "0x3D26F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600179A")]
		[Address(RVA = "0x3D26F40", Offset = "0x3D26F40", VA = "0x3D26F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700031F")]
	public string Name
	{
		[Token(Token = "0x600179B")]
		[Address(RVA = "0x3D26F90", Offset = "0x3D26F90", VA = "0x3D26F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179C")]
		[Address(RVA = "0x3D26FB0", Offset = "0x3D26FB0", VA = "0x3D26FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000320")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x3D27010", Offset = "0x3D27010", VA = "0x3D27010")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x3D27090", Offset = "0x3D27090", VA = "0x3D27090")]
		set
		{
		}
	}

	[Token(Token = "0x17000321")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x3D27100", Offset = "0x3D27100", VA = "0x3D27100")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x3D27180", Offset = "0x3D27180", VA = "0x3D27180")]
		set
		{
		}
	}

	[Token(Token = "0x17000322")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x3D271F0", Offset = "0x3D271F0", VA = "0x3D271F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A2")]
		[Address(RVA = "0x3D27270", Offset = "0x3D27270", VA = "0x3D27270")]
		set
		{
		}
	}

	[Token(Token = "0x17000323")]
	public string CollideMode
	{
		[Token(Token = "0x60017A3")]
		[Address(RVA = "0x3D272E0", Offset = "0x3D272E0", VA = "0x3D272E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x3D27300", Offset = "0x3D27300", VA = "0x3D27300")]
		set
		{
		}
	}

	[Token(Token = "0x17000324")]
	public string CollideWith
	{
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x3D27360", Offset = "0x3D27360", VA = "0x3D27360")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x3D27380", Offset = "0x3D27380", VA = "0x3D27380")]
		set
		{
		}
	}

	[Token(Token = "0x17000325")]
	public string PhysicsMaterial
	{
		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x3D273E0", Offset = "0x3D273E0", VA = "0x3D273E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x3D27400", Offset = "0x3D27400", VA = "0x3D27400")]
		set
		{
		}
	}

	[Token(Token = "0x17000326")]
	public override string ClassName
	{
		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x3D27490", Offset = "0x3D27490", VA = "0x3D27490", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000327")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x3D274C0", Offset = "0x3D274C0", VA = "0x3D274C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000328")]
	public override bool IsStatic
	{
		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x3D274D0", Offset = "0x3D274D0", VA = "0x3D274D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000329")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60017AF")]
		[Address(RVA = "0x3D274E0", Offset = "0x3D274E0", VA = "0x3D274E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x3D26AB0", Offset = "0x3D26AB0", VA = "0x3D26AB0")]
	public CustomLogicPrefabBuiltin()
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x3D26B40", Offset = "0x3D26B40", VA = "0x3D26B40")]
	public CustomLogicPrefabBuiltin(string prefabCSV, bool clearComponents = false)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x3D26C50", Offset = "0x3D26C50", VA = "0x3D26C50")]
	public void ClearComponents()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x3D26D70", Offset = "0x3D26D70", VA = "0x3D26D70")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x3D27460", Offset = "0x3D27460", VA = "0x3D27460", Slot = "9")]
	public string __Str__()
	{
		return null;
	}
}
