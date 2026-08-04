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

[Token(Token = "0x20002AF")]
[CompilerGenerated]
internal class CustomLogicDictBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20002B0")]
	public static class Factory
	{
		[Token(Token = "0x600101B")]
		[Address(RVA = "0x3FBDDF0", Offset = "0x3FBDDF0", VA = "0x3FBDDF0")]
		public static CustomLogicDictBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002B1")]
	public static class Bindings
	{
		[Token(Token = "0x4000E0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600101C")]
		[Address(RVA = "0x3FBDF40", Offset = "0x3FBDF40", VA = "0x3FBDF40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600101D")]
		[Address(RVA = "0x3FBE330", Offset = "0x3FBE330", VA = "0x3FBE330")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x600101E")]
		[Address(RVA = "0x3FBE3D0", Offset = "0x3FBE3D0", VA = "0x3FBE3D0")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Keys()
		{
			return null;
		}

		[Token(Token = "0x600101F")]
		[Address(RVA = "0x3FBE470", Offset = "0x3FBE470", VA = "0x3FBE470")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Values()
		{
			return null;
		}

		[Token(Token = "0x6001020")]
		[Address(RVA = "0x3FBE510", Offset = "0x3FBE510", VA = "0x3FBE510")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x6001021")]
		[Address(RVA = "0x3FBE660", Offset = "0x3FBE660", VA = "0x3FBE660")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6001022")]
		[Address(RVA = "0x3FBE7B0", Offset = "0x3FBE7B0", VA = "0x3FBE7B0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6001023")]
		[Address(RVA = "0x3FBE900", Offset = "0x3FBE900", VA = "0x3FBE900")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x6001024")]
		[Address(RVA = "0x3FBEA50", Offset = "0x3FBEA50", VA = "0x3FBEA50")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<object, object> _dict;

	[Token(Token = "0x4000E09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicListBuiltin _cachedKeys;

	[Token(Token = "0x4000E0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CustomLogicListBuiltin _cachedValues;

	[Token(Token = "0x4000E0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _version;

	[Token(Token = "0x4000E0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _listsVersion;

	[Token(Token = "0x170001F0")]
	public int Count
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x3FBD520", Offset = "0x3FBD520", VA = "0x3FBD520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F1")]
	public CustomLogicListBuiltin Keys
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x3FBD560", Offset = "0x3FBD560", VA = "0x3FBD560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public CustomLogicListBuiltin Values
	{
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x3FBD680", Offset = "0x3FBD680", VA = "0x3FBD680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F3")]
	public override string ClassName
	{
		[Token(Token = "0x6001016")]
		[Address(RVA = "0x3FBDD90", Offset = "0x3FBDD90", VA = "0x3FBDD90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001017")]
		[Address(RVA = "0x3FBDDC0", Offset = "0x3FBDDC0", VA = "0x3FBDDC0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F5")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x3FBDDD0", Offset = "0x3FBDDD0", VA = "0x3FBDDD0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001019")]
		[Address(RVA = "0x3FBDDE0", Offset = "0x3FBDDE0", VA = "0x3FBDDE0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x3FBD3E0", Offset = "0x3FBD3E0", VA = "0x3FBD3E0")]
	public CustomLogicDictBuiltin()
	{
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x3FBD480", Offset = "0x3FBD480", VA = "0x3FBD480")]
	public CustomLogicDictBuiltin(int capacity)
	{
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x3FBD690", Offset = "0x3FBD690", VA = "0x3FBD690")]
	public void Clear()
	{
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x3FBD710", Offset = "0x3FBD710", VA = "0x3FBD710")]
	public object Get(object key, [Optional] object defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x3FBD790", Offset = "0x3FBD790", VA = "0x3FBD790")]
	public void Set(object key, object value)
	{
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x3FBD7F0", Offset = "0x3FBD7F0", VA = "0x3FBD7F0")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x3FBD850", Offset = "0x3FBD850", VA = "0x3FBD850")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x3FBD8A0", Offset = "0x3FBD8A0", VA = "0x3FBD8A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x3FBD700", Offset = "0x3FBD700", VA = "0x3FBD700")]
	private void InvalidateCache()
	{
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x3FBD570", Offset = "0x3FBD570", VA = "0x3FBD570")]
	private void EnsureListsUpToDate()
	{
	}
}
