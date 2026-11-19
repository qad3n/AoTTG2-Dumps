// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000370")]
internal class DynamicPropertyCollection
{
	[Token(Token = "0x2000371")]
	private class DynamicPropertyReg
	{
		[Token(Token = "0x4000E6E")]
		[FieldOffset(Offset = "0x10")]
		public IDynamicProperty Property;

		[Token(Token = "0x4000E6F")]
		[FieldOffset(Offset = "0x18")]
		public IDynamicMessageSink Sink;

		[Token(Token = "0x6001DA9")]
		[Address(RVA = "0x5384990", Offset = "0x5383990", VA = "0x5384990")]
		public DynamicPropertyReg()
		{
		}
	}

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _properties;

	[Token(Token = "0x1700036C")]
	public bool HasProperties
	{
		[Token(Token = "0x6001DA3")]
		[Address(RVA = "0x5381950", Offset = "0x5380950", VA = "0x5381950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x5381CE0", Offset = "0x5380CE0", VA = "0x5381CE0")]
	public bool RegisterDynamicProperty(IDynamicProperty prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x5382070", Offset = "0x5381070", VA = "0x5382070")]
	public bool UnregisterDynamicProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x5382340", Offset = "0x5381340", VA = "0x5382340")]
	public void NotifyMessage(bool start, IMessage msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x5384800", Offset = "0x5383800", VA = "0x5384800")]
	private int FindProperty(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x53821D0", Offset = "0x53811D0", VA = "0x53821D0")]
	public DynamicPropertyCollection()
	{
	}
}
