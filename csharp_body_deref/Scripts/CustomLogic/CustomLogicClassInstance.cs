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

[Token(Token = "0x200063B")]
public abstract class CustomLogicClassInstance
{
	[Token(Token = "0x4001B50")]
	[FieldOffset(Offset = "0x11")]
	public bool Inited;

	[Token(Token = "0x4001B51")]
	[FieldOffset(Offset = "0x18")]
	public readonly Dictionary<string, object> Variables;

	[Token(Token = "0x4001B52")]
	[FieldOffset(Offset = "0x20")]
	protected bool _containsTypeOverride;

	[Token(Token = "0x17000A6C")]
	public virtual bool Enabled
	{
		[Token(Token = "0x6003BF3")]
		[Address(RVA = "0x5A725C0", Offset = "0x5A715C0", VA = "0x5A725C0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003BF4")]
		[Address(RVA = "0x5A725D0", Offset = "0x5A715D0", VA = "0x5A725D0", Slot = "5")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A6D")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6003BF6")]
		[Address(RVA = "0x5A725F0", Offset = "0x5A715F0", VA = "0x5A725F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003BF7")]
		[Address(RVA = "0x5A72600", Offset = "0x5A71600", VA = "0x5A72600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A6E")]
	public abstract string ClassName
	{
		[Token(Token = "0x6003BF9")]
		get;
	}

	[Token(Token = "0x17000A6F")]
	public virtual bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6003BFA")]
		[Address(RVA = "0x5A72610", Offset = "0x5A71610", VA = "0x5A72610", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003BF5")]
	[Address(RVA = "0x5A725E0", Offset = "0x5A715E0", VA = "0x5A725E0")]
	public void SetContainsTypeOverride(bool contains)
	{
	}

	[Token(Token = "0x6003BF8")]
	[Address(RVA = "0x5A6A330", Offset = "0x5A69330", VA = "0x5A6A330")]
	protected CustomLogicClassInstance()
	{
	}

	[Token(Token = "0x6003BFB")]
	[Address(RVA = "0x5A72620", Offset = "0x5A71620", VA = "0x5A72620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6003BFC")]
	[Address(RVA = "0x5A72940", Offset = "0x5A71940", VA = "0x5A72940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003BFD")]
	[Address(RVA = "0x5A72A40", Offset = "0x5A71A40", VA = "0x5A72A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BFE")]
	[Address(RVA = "0x5A72BD0", Offset = "0x5A71BD0", VA = "0x5A72BD0")]
	public object GetVariable(string name)
	{
		return null;
	}

	[Token(Token = "0x6003BFF")]
	[Address(RVA = "0x5A72C90", Offset = "0x5A71C90", VA = "0x5A72C90")]
	public bool TryGetVariable(string name, out object variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C00")]
	[Address(RVA = "0x5A72740", Offset = "0x5A71740", VA = "0x5A72740")]
	public bool HasVariable(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C01")]
	[Address(RVA = "0x5A6CDF0", Offset = "0x5A6BDF0", VA = "0x5A6CDF0")]
	public bool ShowVariableInInspector(string name)
	{
		return default(bool);
	}
}
