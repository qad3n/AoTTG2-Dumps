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
		[Address(RVA = "0x3B7C640", Offset = "0x3B7C640", VA = "0x3B7C640")]
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
		[Address(RVA = "0x3B79290", Offset = "0x3B79290", VA = "0x3B79290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001D5F")]
	[Address(RVA = "0x3B79610", Offset = "0x3B79610", VA = "0x3B79610")]
	public bool RegisterDynamicProperty(IDynamicProperty prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x3B79A00", Offset = "0x3B79A00", VA = "0x3B79A00")]
	public bool UnregisterDynamicProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D61")]
	[Address(RVA = "0x3B79D10", Offset = "0x3B79D10", VA = "0x3B79D10")]
	public void NotifyMessage(bool start, IMessage msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D62")]
	[Address(RVA = "0x3B7C4B0", Offset = "0x3B7C4B0", VA = "0x3B7C4B0")]
	private int FindProperty(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6001D63")]
	[Address(RVA = "0x3B79B80", Offset = "0x3B79B80", VA = "0x3B79B80")]
	public DynamicPropertyCollection()
	{
	}
}
