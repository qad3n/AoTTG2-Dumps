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

[Token(Token = "0x2000459")]
[CompilerGenerated]
internal class CustomLogicDictBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200045A")]
	public static class Factory
	{
		[Token(Token = "0x6001B14")]
		[Address(RVA = "0x58AE290", Offset = "0x58AD290", VA = "0x58AE290")]
		public static CustomLogicDictBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200045B")]
	public static class Bindings
	{
		[Token(Token = "0x40015CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x58AE3E0", Offset = "0x58AD3E0", VA = "0x58AE3E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x58AE7D0", Offset = "0x58AD7D0", VA = "0x58AE7D0")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Count()
		{
			return null;
		}

		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x58AE870", Offset = "0x58AD870", VA = "0x58AE870")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Keys()
		{
			return null;
		}

		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x58AE910", Offset = "0x58AD910", VA = "0x58AE910")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Values()
		{
			return null;
		}

		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x58AE9B0", Offset = "0x58AD9B0", VA = "0x58AE9B0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Clear()
		{
			return null;
		}

		[Token(Token = "0x6001B1A")]
		[Address(RVA = "0x58AEAF0", Offset = "0x58ADAF0", VA = "0x58AEAF0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6001B1B")]
		[Address(RVA = "0x58AEC30", Offset = "0x58ADC30", VA = "0x58AEC30")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6001B1C")]
		[Address(RVA = "0x58AED70", Offset = "0x58ADD70", VA = "0x58AED70")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Remove()
		{
			return null;
		}

		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x58AEEB0", Offset = "0x58ADEB0", VA = "0x58AEEB0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Contains()
		{
			return null;
		}
	}

	[Token(Token = "0x40015C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<object, object> _dict;

	[Token(Token = "0x40015C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicListBuiltin _cachedKeys;

	[Token(Token = "0x40015CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CustomLogicListBuiltin _cachedValues;

	[Token(Token = "0x40015CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _version;

	[Token(Token = "0x40015CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _listsVersion;

	[Token(Token = "0x170002E6")]
	public int Count
	{
		[Token(Token = "0x6001B04")]
		[Address(RVA = "0x58ADA40", Offset = "0x58ACA40", VA = "0x58ADA40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E7")]
	public CustomLogicListBuiltin Keys
	{
		[Token(Token = "0x6001B05")]
		[Address(RVA = "0x58ADA80", Offset = "0x58ACA80", VA = "0x58ADA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E8")]
	public CustomLogicListBuiltin Values
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x58ADBA0", Offset = "0x58ACBA0", VA = "0x58ADBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E9")]
	public override string ClassName
	{
		[Token(Token = "0x6001B0F")]
		[Address(RVA = "0x58AE230", Offset = "0x58AD230", VA = "0x58AE230", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B10")]
		[Address(RVA = "0x58AE260", Offset = "0x58AD260", VA = "0x58AE260", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B11")]
		[Address(RVA = "0x58AE270", Offset = "0x58AD270", VA = "0x58AE270", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B12")]
		[Address(RVA = "0x58AE280", Offset = "0x58AD280", VA = "0x58AE280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x58AD900", Offset = "0x58AC900", VA = "0x58AD900")]
	public CustomLogicDictBuiltin()
	{
	}

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x58AD9A0", Offset = "0x58AC9A0", VA = "0x58AD9A0")]
	public CustomLogicDictBuiltin(int capacity)
	{
	}

	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x58ADBB0", Offset = "0x58ACBB0", VA = "0x58ADBB0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x58ADC30", Offset = "0x58ACC30", VA = "0x58ADC30")]
	public object Get(object key, [Optional] object defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x58ADCB0", Offset = "0x58ACCB0", VA = "0x58ADCB0")]
	public void Set(object key, object value)
	{
	}

	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x58ADD10", Offset = "0x58ACD10", VA = "0x58ADD10")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x58ADD70", Offset = "0x58ACD70", VA = "0x58ADD70")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x58ADDC0", Offset = "0x58ACDC0", VA = "0x58ADDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x58ADC20", Offset = "0x58ACC20", VA = "0x58ADC20")]
	private void InvalidateCache()
	{
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x58ADA90", Offset = "0x58ACA90", VA = "0x58ADA90")]
	private void EnsureListsUpToDate()
	{
	}
}
