// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDictBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDictBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003FA")]
[CompilerGenerated]
internal class CustomLogicDictBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003FB")]
	public static class Factory
	{
		[Token(Token = "0x600189D")]
		[Address(RVA = "0x1ED9850", Offset = "0x1ED7E50", VA = "0x181ED9850")]
		public static CustomLogicDictBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003FC")]
	public static class Bindings
	{
		[Token(Token = "0x400142D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600189E")]
		[Address(RVA = "0x1EC1CD0", Offset = "0x1EC02D0", VA = "0x181EC1CD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600189F")]
		[Address(RVA = "0x1ECA9C0", Offset = "0x1EC8FC0", VA = "0x181ECA9C0")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x1ECB000", Offset = "0x1EC9600", VA = "0x181ECB000")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Keys()
		{
			return null;
		}

		[Token(Token = "0x60018A1")]
		[Address(RVA = "0x1ECB870", Offset = "0x1EC9E70", VA = "0x181ECB870")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Values()
		{
			return null;
		}

		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x1EC4CB0", Offset = "0x1EC32B0", VA = "0x181EC4CB0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x1EC5C80", Offset = "0x1EC4280", VA = "0x181EC5C80")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x1EC8080", Offset = "0x1EC6680", VA = "0x181EC8080")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x1EC7AE0", Offset = "0x1EC60E0", VA = "0x181EC7AE0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x60018A6")]
		[Address(RVA = "0x1EC5130", Offset = "0x1EC3730", VA = "0x181EC5130")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}
	}

	[Token(Token = "0x4001428")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<object, object> _dict;

	[Token(Token = "0x4001429")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicListBuiltin _cachedKeys;

	[Token(Token = "0x400142A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CustomLogicListBuiltin _cachedValues;

	[Token(Token = "0x400142B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _version;

	[Token(Token = "0x400142C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _listsVersion;

	[Token(Token = "0x170002A5")]
	public int Count
	{
		[Token(Token = "0x600188D")]
		[Address(RVA = "0x1ED00D0", Offset = "0x1ECE6D0", VA = "0x181ED00D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A6")]
	public CustomLogicListBuiltin Keys
	{
		[Token(Token = "0x600188E")]
		[Address(RVA = "0x1ED0120", Offset = "0x1ECE720", VA = "0x181ED0120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public CustomLogicListBuiltin Values
	{
		[Token(Token = "0x600188F")]
		[Address(RVA = "0x1ED0140", Offset = "0x1ECE740", VA = "0x181ED0140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A8")]
	public override string ClassName
	{
		[Token(Token = "0x6001898")]
		[Address(RVA = "0x1ED00A0", Offset = "0x1ECE6A0", VA = "0x181ED00A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001899")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AA")]
	public override bool IsStatic
	{
		[Token(Token = "0x600189A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600189B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x1ECFF50", Offset = "0x1ECE550", VA = "0x181ECFF50")]
	public CustomLogicDictBuiltin()
	{
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x1ECFFF0", Offset = "0x1ECE5F0", VA = "0x181ECFFF0")]
	public CustomLogicDictBuiltin(int capacity)
	{
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x1ECF760", Offset = "0x1ECDD60", VA = "0x181ECF760")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x1ECF940", Offset = "0x1ECDF40", VA = "0x181ECF940")]
	public object Get(object key, [Optional] object defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x1ECFA30", Offset = "0x1ECE030", VA = "0x181ECFA30")]
	public void Set(object key, object value)
	{
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x1ECF9D0", Offset = "0x1ECDFD0", VA = "0x181ECF9D0")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x1ECF7D0", Offset = "0x1ECDDD0", VA = "0x181ECF7D0")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x1ECFAA0", Offset = "0x1ECE0A0", VA = "0x181ECFAA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x1ECF9C0", Offset = "0x1ECDFC0", VA = "0x181ECF9C0")]
	private void InvalidateCache()
	{
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x1ECF830", Offset = "0x1ECDE30", VA = "0x181ECF830")]
	private void EnsureListsUpToDate()
	{
	}
}
