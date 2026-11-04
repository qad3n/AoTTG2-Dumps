// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassInstance
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005DC")]
public abstract class CustomLogicClassInstance
{
	[Token(Token = "0x40019AF")]
	[FieldOffset(Offset = "0x11")]
	public bool Inited;

	[Token(Token = "0x40019B0")]
	[FieldOffset(Offset = "0x18")]
	public readonly Dictionary<string, object> Variables;

	[Token(Token = "0x40019B1")]
	[FieldOffset(Offset = "0x20")]
	protected bool _containsTypeOverride;

	[Token(Token = "0x17000A24")]
	public virtual bool Enabled
	{
		[Token(Token = "0x6003965")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003966")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0", Slot = "5")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A25")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6003968")]
		[Address(RVA = "0x209BE50", Offset = "0x209A450", VA = "0x18209BE50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003969")]
		[Address(RVA = "0x209BE60", Offset = "0x209A460", VA = "0x18209BE60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A26")]
	public abstract string ClassName
	{
		[Token(Token = "0x600396B")]
		get;
	}

	[Token(Token = "0x17000A27")]
	public virtual bool LookupBaseClassForVariables
	{
		[Token(Token = "0x600396C")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003967")]
	[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
	public void SetContainsTypeOverride(bool contains)
	{
	}

	[Token(Token = "0x600396A")]
	[Address(RVA = "0x209BDD0", Offset = "0x209A3D0", VA = "0x18209BDD0")]
	protected CustomLogicClassInstance()
	{
	}

	[Token(Token = "0x600396D")]
	[Address(RVA = "0x209BA10", Offset = "0x209A010", VA = "0x18209BA10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600396E")]
	[Address(RVA = "0x209B5D0", Offset = "0x2099BD0", VA = "0x18209B5D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600396F")]
	[Address(RVA = "0x209B440", Offset = "0x2099A40", VA = "0x18209B440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003970")]
	[Address(RVA = "0x209B6C0", Offset = "0x2099CC0", VA = "0x18209B6C0")]
	public object GetVariable(string name)
	{
		return null;
	}

	[Token(Token = "0x6003971")]
	[Address(RVA = "0x209BB20", Offset = "0x209A120", VA = "0x18209BB20")]
	public bool TryGetVariable(string name, out object variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6003972")]
	[Address(RVA = "0x209B790", Offset = "0x2099D90", VA = "0x18209B790")]
	public bool HasVariable(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003973")]
	[Address(RVA = "0x209B9A0", Offset = "0x2099FA0", VA = "0x18209B9A0")]
	public bool ShowVariableInInspector(string name)
	{
		return default(bool);
	}
}
