// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPrefabBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x20004CE")]
[CompilerGenerated]
internal class CustomLogicPrefabBuiltin : BuiltinClassInstance, ICustomLogicToString
{
	[Token(Token = "0x20004CF")]
	public static class Factory
	{
		[Token(Token = "0x60024AA")]
		[Address(RVA = "0x593C710", Offset = "0x593B710", VA = "0x593C710")]
		public static CustomLogicPrefabBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004D0")]
	public static class Bindings
	{
		[Token(Token = "0x4001775")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60024AB")]
		[Address(RVA = "0x593C8B0", Offset = "0x593B8B0", VA = "0x593C8B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60024AC")]
		[Address(RVA = "0x593CE70", Offset = "0x593BE70", VA = "0x593CE70")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__AssetType()
		{
			return null;
		}

		[Token(Token = "0x60024AD")]
		[Address(RVA = "0x593CF50", Offset = "0x593BF50", VA = "0x593CF50")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Asset()
		{
			return null;
		}

		[Token(Token = "0x60024AE")]
		[Address(RVA = "0x593D030", Offset = "0x593C030", VA = "0x593D030")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Active()
		{
			return null;
		}

		[Token(Token = "0x60024AF")]
		[Address(RVA = "0x593D110", Offset = "0x593C110", VA = "0x593D110")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Static()
		{
			return null;
		}

		[Token(Token = "0x60024B0")]
		[Address(RVA = "0x593D1F0", Offset = "0x593C1F0", VA = "0x593D1F0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Visible()
		{
			return null;
		}

		[Token(Token = "0x60024B1")]
		[Address(RVA = "0x593D2D0", Offset = "0x593C2D0", VA = "0x593D2D0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x60024B2")]
		[Address(RVA = "0x593D3B0", Offset = "0x593C3B0", VA = "0x593D3B0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x60024B3")]
		[Address(RVA = "0x593D490", Offset = "0x593C490", VA = "0x593D490")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x60024B4")]
		[Address(RVA = "0x593D570", Offset = "0x593C570", VA = "0x593D570")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x593D650", Offset = "0x593C650", VA = "0x593D650")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideMode()
		{
			return null;
		}

		[Token(Token = "0x60024B6")]
		[Address(RVA = "0x593D730", Offset = "0x593C730", VA = "0x593D730")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideWith()
		{
			return null;
		}

		[Token(Token = "0x60024B7")]
		[Address(RVA = "0x593D810", Offset = "0x593C810", VA = "0x593D810")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__PhysicsMaterial()
		{
			return null;
		}

		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x593D8F0", Offset = "0x593C8F0", VA = "0x593D8F0")]
		public static CLMethodBinding<CustomLogicPrefabBuiltin> __CreateMethodBinding__ClearComponents()
		{
			return null;
		}
	}

	[Token(Token = "0x4001773")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptSceneObject Value;

	[Token(Token = "0x4001774")]
	[FieldOffset(Offset = "0x38")]
	public bool PersistsOwnership;

	[Token(Token = "0x17000477")]
	public string AssetType
	{
		[Token(Token = "0x600248B")]
		[Address(RVA = "0x593BF10", Offset = "0x593AF10", VA = "0x593BF10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600248C")]
		[Address(RVA = "0x593BF30", Offset = "0x593AF30", VA = "0x593BF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000478")]
	public string Asset
	{
		[Token(Token = "0x600248D")]
		[Address(RVA = "0x593BFE0", Offset = "0x593AFE0", VA = "0x593BFE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600248E")]
		[Address(RVA = "0x593C000", Offset = "0x593B000", VA = "0x593C000")]
		set
		{
		}
	}

	[Token(Token = "0x17000479")]
	public bool Active
	{
		[Token(Token = "0x600248F")]
		[Address(RVA = "0x593C060", Offset = "0x593B060", VA = "0x593C060")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002490")]
		[Address(RVA = "0x593C080", Offset = "0x593B080", VA = "0x593C080")]
		set
		{
		}
	}

	[Token(Token = "0x1700047A")]
	public bool Static
	{
		[Token(Token = "0x6002491")]
		[Address(RVA = "0x593C0D0", Offset = "0x593B0D0", VA = "0x593C0D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002492")]
		[Address(RVA = "0x593C0F0", Offset = "0x593B0F0", VA = "0x593C0F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047B")]
	public bool Visible
	{
		[Token(Token = "0x6002493")]
		[Address(RVA = "0x593C140", Offset = "0x593B140", VA = "0x593C140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002494")]
		[Address(RVA = "0x593C160", Offset = "0x593B160", VA = "0x593C160")]
		set
		{
		}
	}

	[Token(Token = "0x1700047C")]
	public string Name
	{
		[Token(Token = "0x6002495")]
		[Address(RVA = "0x593C1B0", Offset = "0x593B1B0", VA = "0x593C1B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002496")]
		[Address(RVA = "0x593C1D0", Offset = "0x593B1D0", VA = "0x593C1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047D")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6002497")]
		[Address(RVA = "0x593C230", Offset = "0x593B230", VA = "0x593C230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002498")]
		[Address(RVA = "0x593C2B0", Offset = "0x593B2B0", VA = "0x593C2B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047E")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6002499")]
		[Address(RVA = "0x593C320", Offset = "0x593B320", VA = "0x593C320")]
		get
		{
			return null;
		}
		[Token(Token = "0x600249A")]
		[Address(RVA = "0x593C3A0", Offset = "0x593B3A0", VA = "0x593C3A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047F")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x600249B")]
		[Address(RVA = "0x593C410", Offset = "0x593B410", VA = "0x593C410")]
		get
		{
			return null;
		}
		[Token(Token = "0x600249C")]
		[Address(RVA = "0x593C490", Offset = "0x593B490", VA = "0x593C490")]
		set
		{
		}
	}

	[Token(Token = "0x17000480")]
	public string CollideMode
	{
		[Token(Token = "0x600249D")]
		[Address(RVA = "0x593C500", Offset = "0x593B500", VA = "0x593C500")]
		get
		{
			return null;
		}
		[Token(Token = "0x600249E")]
		[Address(RVA = "0x593C520", Offset = "0x593B520", VA = "0x593C520")]
		set
		{
		}
	}

	[Token(Token = "0x17000481")]
	public string CollideWith
	{
		[Token(Token = "0x600249F")]
		[Address(RVA = "0x593C580", Offset = "0x593B580", VA = "0x593C580")]
		get
		{
			return null;
		}
		[Token(Token = "0x60024A0")]
		[Address(RVA = "0x593C5A0", Offset = "0x593B5A0", VA = "0x593C5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000482")]
	public string PhysicsMaterial
	{
		[Token(Token = "0x60024A1")]
		[Address(RVA = "0x593C600", Offset = "0x593B600", VA = "0x593C600")]
		get
		{
			return null;
		}
		[Token(Token = "0x60024A2")]
		[Address(RVA = "0x593C620", Offset = "0x593B620", VA = "0x593C620")]
		set
		{
		}
	}

	[Token(Token = "0x17000483")]
	public override string ClassName
	{
		[Token(Token = "0x60024A6")]
		[Address(RVA = "0x593C6B0", Offset = "0x593B6B0", VA = "0x593C6B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000484")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60024A7")]
		[Address(RVA = "0x593C6E0", Offset = "0x593B6E0", VA = "0x593C6E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000485")]
	public override bool IsStatic
	{
		[Token(Token = "0x60024A8")]
		[Address(RVA = "0x593C6F0", Offset = "0x593B6F0", VA = "0x593C6F0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000486")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60024A9")]
		[Address(RVA = "0x593C700", Offset = "0x593B700", VA = "0x593C700", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002489")]
	[Address(RVA = "0x593BCD0", Offset = "0x593ACD0", VA = "0x593BCD0")]
	public CustomLogicPrefabBuiltin()
	{
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x593BD60", Offset = "0x593AD60", VA = "0x593BD60")]
	public CustomLogicPrefabBuiltin(string prefabCSV, bool clearComponents = false)
	{
	}

	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x593BE70", Offset = "0x593AE70", VA = "0x593BE70")]
	public void ClearComponents()
	{
	}

	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x593BF90", Offset = "0x593AF90", VA = "0x593BF90")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x593C680", Offset = "0x593B680", VA = "0x593C680", Slot = "11")]
	public string __Str__()
	{
		return null;
	}
}
