// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000485")]
public abstract class CustomLogicClassInstance
{
	[Token(Token = "0x4001368")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x4001369")]
	[FieldOffset(Offset = "0x11")]
	public bool Inited;

	[Token(Token = "0x400136A")]
	[FieldOffset(Offset = "0x18")]
	public readonly Dictionary<string, object> Variables;

	[Token(Token = "0x400136B")]
	[FieldOffset(Offset = "0x20")]
	protected bool _containsTypeOverride;

	[Token(Token = "0x1700092E")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6002FE9")]
		[Address(RVA = "0x415A4D0", Offset = "0x415A4D0", VA = "0x415A4D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FEA")]
		[Address(RVA = "0x415A4E0", Offset = "0x415A4E0", VA = "0x415A4E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092F")]
	public abstract string ClassName
	{
		[Token(Token = "0x6002FEC")]
		get;
	}

	[Token(Token = "0x17000930")]
	public virtual bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6002FED")]
		[Address(RVA = "0x415A4F0", Offset = "0x415A4F0", VA = "0x415A4F0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FE8")]
	[Address(RVA = "0x415A4C0", Offset = "0x415A4C0", VA = "0x415A4C0")]
	public void SetContainsTypeOverride(bool contains)
	{
	}

	[Token(Token = "0x6002FEB")]
	[Address(RVA = "0x41543C0", Offset = "0x41543C0", VA = "0x41543C0")]
	protected CustomLogicClassInstance()
	{
	}

	[Token(Token = "0x6002FEE")]
	[Address(RVA = "0x415A500", Offset = "0x415A500", VA = "0x415A500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002FEF")]
	[Address(RVA = "0x415A810", Offset = "0x415A810", VA = "0x415A810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002FF0")]
	[Address(RVA = "0x415A910", Offset = "0x415A910", VA = "0x415A910", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FF1")]
	[Address(RVA = "0x415AAA0", Offset = "0x415AAA0", VA = "0x415AAA0")]
	public object GetVariable(string name)
	{
		return null;
	}

	[Token(Token = "0x6002FF2")]
	[Address(RVA = "0x415AB60", Offset = "0x415AB60", VA = "0x415AB60")]
	public bool TryGetVariable(string name, out object variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FF3")]
	[Address(RVA = "0x415A610", Offset = "0x415A610", VA = "0x415A610")]
	public bool HasVariable(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FF4")]
	[Address(RVA = "0x4156AE0", Offset = "0x4156AE0", VA = "0x4156AE0")]
	public bool ShowVariableInInspector(string name)
	{
		return default(bool);
	}
}
