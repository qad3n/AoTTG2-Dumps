using System.Collections;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000368")]
internal class DynamicPropertyCollection
{
	[Token(Token = "0x2000369")]
	private class DynamicPropertyReg
	{
		[Token(Token = "0x4000F01")]
		[FieldOffset(Offset = "0x10")]
		public IDynamicProperty Property;

		[Token(Token = "0x4000F02")]
		[FieldOffset(Offset = "0x18")]
		public IDynamicMessageSink Sink;

		[Token(Token = "0x6001D64")]
		[Address(RVA = "0x4E96B20", Offset = "0x4E96B20", VA = "0x4E96B20")]
		public DynamicPropertyReg()
		{
		}
	}

	[Token(Token = "0x4000F00")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _properties;

	[Token(Token = "0x1700036B")]
	public bool HasProperties
	{
		[Token(Token = "0x6001D5E")]
		[Address(RVA = "0x4E93770", Offset = "0x4E93770", VA = "0x4E93770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001D5F")]
	[Address(RVA = "0x4E93AF0", Offset = "0x4E93AF0", VA = "0x4E93AF0")]
	public bool RegisterDynamicProperty(IDynamicProperty prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x4E93EE0", Offset = "0x4E93EE0", VA = "0x4E93EE0")]
	public bool UnregisterDynamicProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D61")]
	[Address(RVA = "0x4E941F0", Offset = "0x4E941F0", VA = "0x4E941F0")]
	public void NotifyMessage(bool start, IMessage msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D62")]
	[Address(RVA = "0x4E96990", Offset = "0x4E96990", VA = "0x4E96990")]
	private int FindProperty(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6001D63")]
	[Address(RVA = "0x4E94060", Offset = "0x4E94060", VA = "0x4E94060")]
	public DynamicPropertyCollection()
	{
	}
}
