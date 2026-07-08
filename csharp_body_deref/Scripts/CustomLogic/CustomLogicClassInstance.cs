using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000440")]
public abstract class CustomLogicClassInstance
{
	[Token(Token = "0x400125C")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x400125D")]
	[FieldOffset(Offset = "0x11")]
	public bool Inited;

	[Token(Token = "0x400125E")]
	[FieldOffset(Offset = "0x18")]
	public readonly Dictionary<string, object> Variables;

	[Token(Token = "0x400125F")]
	[FieldOffset(Offset = "0x20")]
	protected bool _containsTypeOverride;

	[Token(Token = "0x170008C4")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6002DDF")]
		[Address(RVA = "0x3E4EF90", Offset = "0x3E4EF90", VA = "0x3E4EF90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002DE0")]
		[Address(RVA = "0x3E4EFA0", Offset = "0x3E4EFA0", VA = "0x3E4EFA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170008C5")]
	public abstract string ClassName
	{
		[Token(Token = "0x6002DE2")]
		get;
	}

	[Token(Token = "0x170008C6")]
	public virtual bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6002DE3")]
		[Address(RVA = "0x3E4EFB0", Offset = "0x3E4EFB0", VA = "0x3E4EFB0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DDE")]
	[Address(RVA = "0x3E4EF80", Offset = "0x3E4EF80", VA = "0x3E4EF80")]
	public void SetContainsTypeOverride(bool contains)
	{
	}

	[Token(Token = "0x6002DE1")]
	[Address(RVA = "0x3E48EA0", Offset = "0x3E48EA0", VA = "0x3E48EA0")]
	protected CustomLogicClassInstance()
	{
	}

	[Token(Token = "0x6002DE4")]
	[Address(RVA = "0x3E4EFC0", Offset = "0x3E4EFC0", VA = "0x3E4EFC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002DE5")]
	[Address(RVA = "0x3E4F0D0", Offset = "0x3E4F0D0", VA = "0x3E4F0D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002DE6")]
	[Address(RVA = "0x3E4F1D0", Offset = "0x3E4F1D0", VA = "0x3E4F1D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DE7")]
	[Address(RVA = "0x3E4F360", Offset = "0x3E4F360", VA = "0x3E4F360")]
	public object GetVariable(string name)
	{
		return null;
	}

	[Token(Token = "0x6002DE8")]
	[Address(RVA = "0x3E4F420", Offset = "0x3E4F420", VA = "0x3E4F420")]
	public bool TryGetVariable(string name, out object variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DE9")]
	[Address(RVA = "0x3E37280", Offset = "0x3E37280", VA = "0x3E37280")]
	public bool HasVariable(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEA")]
	[Address(RVA = "0x3E4B660", Offset = "0x3E4B660", VA = "0x3E4B660")]
	public bool ShowVariableInInspector(string name)
	{
		return default(bool);
	}
}
