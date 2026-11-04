// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicListBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicListBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000403")]
[CompilerGenerated]
internal class CustomLogicListBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000404")]
	public static class Factory
	{
		[Token(Token = "0x60018FB")]
		[Address(RVA = "0x1ED8B20", Offset = "0x1ED7120", VA = "0x181ED8B20")]
		public static CustomLogicListBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000405")]
	public static class Bindings
	{
		[Token(Token = "0x4001442")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60018FC")]
		[Address(RVA = "0x1EBB010", Offset = "0x1EB9610", VA = "0x181EBB010")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60018FD")]
		[Address(RVA = "0x1ECAA60", Offset = "0x1EC9060", VA = "0x181ECAA60")]
		public static CLPropertyBinding<CustomLogicListBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x60018FE")]
		[Address(RVA = "0x1EC4DD0", Offset = "0x1EC33D0", VA = "0x181EC4DD0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x60018FF")]
		[Address(RVA = "0x1EC5B60", Offset = "0x1EC4160", VA = "0x181EC5B60")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6001900")]
		[Address(RVA = "0x1EC7F60", Offset = "0x1EC6560", VA = "0x181EC7F60")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6001901")]
		[Address(RVA = "0x1EC4710", Offset = "0x1EC2D10", VA = "0x181EC4710")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Add()
		{
			return null;
		}

		[Token(Token = "0x6001902")]
		[Address(RVA = "0x1EC5EC0", Offset = "0x1EC44C0", VA = "0x181EC5EC0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__InsertAt()
		{
			return null;
		}

		[Token(Token = "0x6001903")]
		[Address(RVA = "0x1EC7780", Offset = "0x1EC5D80", VA = "0x181EC7780")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__RemoveAt()
		{
			return null;
		}

		[Token(Token = "0x6001904")]
		[Address(RVA = "0x1EC79C0", Offset = "0x1EC5FC0", VA = "0x181EC79C0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x6001905")]
		[Address(RVA = "0x1EC5250", Offset = "0x1EC3850", VA = "0x181EC5250")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}

		[Token(Token = "0x6001906")]
		[Address(RVA = "0x1EC8740", Offset = "0x1EC6D40", VA = "0x181EC8740")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Sort()
		{
			return null;
		}

		[Token(Token = "0x6001907")]
		[Address(RVA = "0x1EC8620", Offset = "0x1EC6C20", VA = "0x181EC8620")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__SortCustom()
		{
			return null;
		}

		[Token(Token = "0x6001908")]
		[Address(RVA = "0x1EC5800", Offset = "0x1EC3E00", VA = "0x181EC5800")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Filter()
		{
			return null;
		}

		[Token(Token = "0x6001909")]
		[Address(RVA = "0x1EC6D60", Offset = "0x1EC5360", VA = "0x181EC6D60")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Map()
		{
			return null;
		}

		[Token(Token = "0x600190A")]
		[Address(RVA = "0x1EC7540", Offset = "0x1EC5B40", VA = "0x181EC7540")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Reduce()
		{
			return null;
		}

		[Token(Token = "0x600190B")]
		[Address(RVA = "0x1EC7420", Offset = "0x1EC5A20", VA = "0x181EC7420")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Randomize()
		{
			return null;
		}

		[Token(Token = "0x600190C")]
		[Address(RVA = "0x1EC8AA0", Offset = "0x1EC70A0", VA = "0x181EC8AA0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__ToSet()
		{
			return null;
		}

		[Token(Token = "0x600190D")]
		[Address(RVA = "0x1EC5370", Offset = "0x1EC3970", VA = "0x181EC5370")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Copy()
		{
			return null;
		}
	}

	[Token(Token = "0x4001440")]
	[FieldOffset(Offset = "0x30")]
	public List<object> List;

	[Token(Token = "0x4001441")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170002B7")]
	public int Count
	{
		[Token(Token = "0x60018E5")]
		[Address(RVA = "0x1ED1A20", Offset = "0x1ED0020", VA = "0x181ED1A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B8")]
	public override string ClassName
	{
		[Token(Token = "0x60018F7")]
		[Address(RVA = "0x1ED19F0", Offset = "0x1ECFFF0", VA = "0x181ED19F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60018F8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BA")]
	public override bool IsStatic
	{
		[Token(Token = "0x60018F9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60018FA")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x1ED1950", Offset = "0x1ECFF50", VA = "0x181ED1950")]
	public CustomLogicListBuiltin()
	{
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x1ED1720", Offset = "0x1ECFD20", VA = "0x181ED1720")]
	public CustomLogicListBuiltin(params object[] parameterValues)
	{
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x1ED1870", Offset = "0x1ECFE70", VA = "0x181ED1870")]
	public CustomLogicListBuiltin(IEnumerable<object> enumerable, bool isReadOnly = false)
	{
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x1ED07F0", Offset = "0x1ECEDF0", VA = "0x181ED07F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x1ED0B50", Offset = "0x1ECF150", VA = "0x181ED0B50")]
	public object Get(int index)
	{
		return null;
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x1ED1150", Offset = "0x1ECF750", VA = "0x181ED1150")]
	public void Set(int index, object value)
	{
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x1ED0740", Offset = "0x1ECED40", VA = "0x181ED0740")]
	public void Add(object value)
	{
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x1ED0BC0", Offset = "0x1ECF1C0", VA = "0x181ED0BC0")]
	public void InsertAt(int index, object value)
	{
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x1ED0FE0", Offset = "0x1ECF5E0", VA = "0x181ED0FE0")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x1ED10A0", Offset = "0x1ECF6A0", VA = "0x181ED10A0")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x1ED08A0", Offset = "0x1ECEEA0", VA = "0x181ED08A0")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x1ED1350", Offset = "0x1ECF950", VA = "0x181ED1350")]
	public void Sort()
	{
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x1ED1220", Offset = "0x1ECF820", VA = "0x181ED1220")]
	public void SortCustom(UserMethod method)
	{
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x1ED0A10", Offset = "0x1ECF010", VA = "0x181ED0A10")]
	public CustomLogicListBuiltin Filter(UserMethod method)
	{
		return null;
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x1ED0C90", Offset = "0x1ECF290", VA = "0x181ED0C90")]
	public CustomLogicListBuiltin Map(UserMethod method)
	{
		return null;
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x1ED0F10", Offset = "0x1ECF510", VA = "0x181ED0F10")]
	public object Reduce(UserMethod method, object initialValue)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x1ED0DD0", Offset = "0x1ECF3D0", VA = "0x181ED0DD0")]
	public CustomLogicListBuiltin Randomize()
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x1ED13F0", Offset = "0x1ECF9F0", VA = "0x181ED13F0")]
	public CustomLogicSetBuiltin ToSet()
	{
		return null;
	}

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x1ED0980", Offset = "0x1ECEF80", VA = "0x181ED0980")]
	public CustomLogicListBuiltin Copy()
	{
		return null;
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x1ED1560", Offset = "0x1ECFB60", VA = "0x181ED1560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
