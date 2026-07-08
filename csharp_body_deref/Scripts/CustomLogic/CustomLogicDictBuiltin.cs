using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000276")]
[CompilerGenerated]
internal class CustomLogicDictBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000277")]
	public static class Factory
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x3CB7EC0", Offset = "0x3CB7EC0", VA = "0x3CB7EC0")]
		public static CustomLogicDictBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000278")]
	public static class Bindings
	{
		[Token(Token = "0x4000D27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x3CB8010", Offset = "0x3CB8010", VA = "0x3CB8010")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x3CB8400", Offset = "0x3CB8400", VA = "0x3CB8400")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x3CB84A0", Offset = "0x3CB84A0", VA = "0x3CB84A0")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Keys()
		{
			return null;
		}

		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x3CB8540", Offset = "0x3CB8540", VA = "0x3CB8540")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Values()
		{
			return null;
		}

		[Token(Token = "0x6000E76")]
		[Address(RVA = "0x3CB85E0", Offset = "0x3CB85E0", VA = "0x3CB85E0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x6000E77")]
		[Address(RVA = "0x3CB8730", Offset = "0x3CB8730", VA = "0x3CB8730")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x3CB8880", Offset = "0x3CB8880", VA = "0x3CB8880")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x3CB89D0", Offset = "0x3CB89D0", VA = "0x3CB89D0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x3CB8B20", Offset = "0x3CB8B20", VA = "0x3CB8B20")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<object, object> _dict;

	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicListBuiltin _cachedKeys;

	[Token(Token = "0x4000D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CustomLogicListBuiltin _cachedValues;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _version;

	[Token(Token = "0x4000D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _listsVersion;

	[Token(Token = "0x17000197")]
	public int Count
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x3CB75F0", Offset = "0x3CB75F0", VA = "0x3CB75F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000198")]
	public CustomLogicListBuiltin Keys
	{
		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x3CB7630", Offset = "0x3CB7630", VA = "0x3CB7630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000199")]
	public CustomLogicListBuiltin Values
	{
		[Token(Token = "0x6000E63")]
		[Address(RVA = "0x3CB7750", Offset = "0x3CB7750", VA = "0x3CB7750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019A")]
	public override string ClassName
	{
		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x3CB7E60", Offset = "0x3CB7E60", VA = "0x3CB7E60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x3CB7E90", Offset = "0x3CB7E90", VA = "0x3CB7E90", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public override bool IsStatic
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x3CB7EA0", Offset = "0x3CB7EA0", VA = "0x3CB7EA0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x3CB7EB0", Offset = "0x3CB7EB0", VA = "0x3CB7EB0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x3CB74B0", Offset = "0x3CB74B0", VA = "0x3CB74B0")]
	public CustomLogicDictBuiltin()
	{
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x3CB7550", Offset = "0x3CB7550", VA = "0x3CB7550")]
	public CustomLogicDictBuiltin(int capacity)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x3CB7760", Offset = "0x3CB7760", VA = "0x3CB7760")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x3CB77E0", Offset = "0x3CB77E0", VA = "0x3CB77E0")]
	public object Get(object key, [Optional] object defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x3CB7860", Offset = "0x3CB7860", VA = "0x3CB7860")]
	public void Set(object key, object value)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x3CB78C0", Offset = "0x3CB78C0", VA = "0x3CB78C0")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x3CB7920", Offset = "0x3CB7920", VA = "0x3CB7920")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x3CB7970", Offset = "0x3CB7970", VA = "0x3CB7970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x3CB77D0", Offset = "0x3CB77D0", VA = "0x3CB77D0")]
	private void InvalidateCache()
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x3CB7640", Offset = "0x3CB7640", VA = "0x3CB7640")]
	private void EnsureListsUpToDate()
	{
	}
}
