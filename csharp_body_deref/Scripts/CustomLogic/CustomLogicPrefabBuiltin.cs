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

[Token(Token = "0x200031F")]
[CompilerGenerated]
internal class CustomLogicPrefabBuiltin : BuiltinClassInstance, ICustomLogicToString
{
	[Token(Token = "0x2000320")]
	public static class Factory
	{
		[Token(Token = "0x600195A")]
		[Address(RVA = "0x402D950", Offset = "0x402D950", VA = "0x402D950")]
		public static CustomLogicPrefabBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000321")]
	public static class Bindings
	{
		[Token(Token = "0x4000FA5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600195B")]
		[Address(RVA = "0x402DAF0", Offset = "0x402DAF0", VA = "0x402DAF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600195C")]
		[Address(RVA = "0x402E0B0", Offset = "0x402E0B0", VA = "0x402E0B0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__AssetType()
		{
			return null;
		}

		[Token(Token = "0x600195D")]
		[Address(RVA = "0x402E190", Offset = "0x402E190", VA = "0x402E190")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Asset()
		{
			return null;
		}

		[Token(Token = "0x600195E")]
		[Address(RVA = "0x402E270", Offset = "0x402E270", VA = "0x402E270")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Active()
		{
			return null;
		}

		[Token(Token = "0x600195F")]
		[Address(RVA = "0x402E350", Offset = "0x402E350", VA = "0x402E350")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Static()
		{
			return null;
		}

		[Token(Token = "0x6001960")]
		[Address(RVA = "0x402E430", Offset = "0x402E430", VA = "0x402E430")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Visible()
		{
			return null;
		}

		[Token(Token = "0x6001961")]
		[Address(RVA = "0x402E510", Offset = "0x402E510", VA = "0x402E510")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x6001962")]
		[Address(RVA = "0x402E5F0", Offset = "0x402E5F0", VA = "0x402E5F0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x6001963")]
		[Address(RVA = "0x402E6D0", Offset = "0x402E6D0", VA = "0x402E6D0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x6001964")]
		[Address(RVA = "0x402E7B0", Offset = "0x402E7B0", VA = "0x402E7B0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x6001965")]
		[Address(RVA = "0x402E890", Offset = "0x402E890", VA = "0x402E890")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideMode()
		{
			return null;
		}

		[Token(Token = "0x6001966")]
		[Address(RVA = "0x402E970", Offset = "0x402E970", VA = "0x402E970")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideWith()
		{
			return null;
		}

		[Token(Token = "0x6001967")]
		[Address(RVA = "0x402EA50", Offset = "0x402EA50", VA = "0x402EA50")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__PhysicsMaterial()
		{
			return null;
		}

		[Token(Token = "0x6001968")]
		[Address(RVA = "0x402EB30", Offset = "0x402EB30", VA = "0x402EB30")]
		public static CLMethodBinding<CustomLogicPrefabBuiltin> __CreateMethodBinding__ClearComponents()
		{
			return null;
		}
	}

	[Token(Token = "0x4000FA3")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptSceneObject Value;

	[Token(Token = "0x4000FA4")]
	[FieldOffset(Offset = "0x38")]
	public bool PersistsOwnership;

	[Token(Token = "0x17000373")]
	public string AssetType
	{
		[Token(Token = "0x600193B")]
		[Address(RVA = "0x402D150", Offset = "0x402D150", VA = "0x402D150")]
		get
		{
			return null;
		}
		[Token(Token = "0x600193C")]
		[Address(RVA = "0x402D170", Offset = "0x402D170", VA = "0x402D170")]
		set
		{
		}
	}

	[Token(Token = "0x17000374")]
	public string Asset
	{
		[Token(Token = "0x600193D")]
		[Address(RVA = "0x402D220", Offset = "0x402D220", VA = "0x402D220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600193E")]
		[Address(RVA = "0x402D240", Offset = "0x402D240", VA = "0x402D240")]
		set
		{
		}
	}

	[Token(Token = "0x17000375")]
	public bool Active
	{
		[Token(Token = "0x600193F")]
		[Address(RVA = "0x402D2A0", Offset = "0x402D2A0", VA = "0x402D2A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001940")]
		[Address(RVA = "0x402D2C0", Offset = "0x402D2C0", VA = "0x402D2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000376")]
	public bool Static
	{
		[Token(Token = "0x6001941")]
		[Address(RVA = "0x402D310", Offset = "0x402D310", VA = "0x402D310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001942")]
		[Address(RVA = "0x402D330", Offset = "0x402D330", VA = "0x402D330")]
		set
		{
		}
	}

	[Token(Token = "0x17000377")]
	public bool Visible
	{
		[Token(Token = "0x6001943")]
		[Address(RVA = "0x402D380", Offset = "0x402D380", VA = "0x402D380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001944")]
		[Address(RVA = "0x402D3A0", Offset = "0x402D3A0", VA = "0x402D3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000378")]
	public string Name
	{
		[Token(Token = "0x6001945")]
		[Address(RVA = "0x402D3F0", Offset = "0x402D3F0", VA = "0x402D3F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001946")]
		[Address(RVA = "0x402D410", Offset = "0x402D410", VA = "0x402D410")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6001947")]
		[Address(RVA = "0x402D470", Offset = "0x402D470", VA = "0x402D470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001948")]
		[Address(RVA = "0x402D4F0", Offset = "0x402D4F0", VA = "0x402D4F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6001949")]
		[Address(RVA = "0x402D560", Offset = "0x402D560", VA = "0x402D560")]
		get
		{
			return null;
		}
		[Token(Token = "0x600194A")]
		[Address(RVA = "0x402D5E0", Offset = "0x402D5E0", VA = "0x402D5E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x600194B")]
		[Address(RVA = "0x402D650", Offset = "0x402D650", VA = "0x402D650")]
		get
		{
			return null;
		}
		[Token(Token = "0x600194C")]
		[Address(RVA = "0x402D6D0", Offset = "0x402D6D0", VA = "0x402D6D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037C")]
	public string CollideMode
	{
		[Token(Token = "0x600194D")]
		[Address(RVA = "0x402D740", Offset = "0x402D740", VA = "0x402D740")]
		get
		{
			return null;
		}
		[Token(Token = "0x600194E")]
		[Address(RVA = "0x402D760", Offset = "0x402D760", VA = "0x402D760")]
		set
		{
		}
	}

	[Token(Token = "0x1700037D")]
	public string CollideWith
	{
		[Token(Token = "0x600194F")]
		[Address(RVA = "0x402D7C0", Offset = "0x402D7C0", VA = "0x402D7C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001950")]
		[Address(RVA = "0x402D7E0", Offset = "0x402D7E0", VA = "0x402D7E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037E")]
	public string PhysicsMaterial
	{
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x402D840", Offset = "0x402D840", VA = "0x402D840")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001952")]
		[Address(RVA = "0x402D860", Offset = "0x402D860", VA = "0x402D860")]
		set
		{
		}
	}

	[Token(Token = "0x1700037F")]
	public override string ClassName
	{
		[Token(Token = "0x6001956")]
		[Address(RVA = "0x402D8F0", Offset = "0x402D8F0", VA = "0x402D8F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000380")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001957")]
		[Address(RVA = "0x402D920", Offset = "0x402D920", VA = "0x402D920", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000381")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001958")]
		[Address(RVA = "0x402D930", Offset = "0x402D930", VA = "0x402D930", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000382")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001959")]
		[Address(RVA = "0x402D940", Offset = "0x402D940", VA = "0x402D940", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x402CF10", Offset = "0x402CF10", VA = "0x402CF10")]
	public CustomLogicPrefabBuiltin()
	{
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x402CFA0", Offset = "0x402CFA0", VA = "0x402CFA0")]
	public CustomLogicPrefabBuiltin(string prefabCSV, bool clearComponents = false)
	{
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x402D0B0", Offset = "0x402D0B0", VA = "0x402D0B0")]
	public void ClearComponents()
	{
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x402D1D0", Offset = "0x402D1D0", VA = "0x402D1D0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x402D8C0", Offset = "0x402D8C0", VA = "0x402D8C0", Slot = "9")]
	public string __Str__()
	{
		return null;
	}
}
