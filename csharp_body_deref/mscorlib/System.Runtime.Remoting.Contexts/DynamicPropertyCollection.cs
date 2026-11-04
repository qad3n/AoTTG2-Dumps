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

[Token(Token = "0x2000397")]
internal class DynamicPropertyCollection
{
	[Token(Token = "0x2000398")]
	private class DynamicPropertyReg
	{
		[Token(Token = "0x4000F0E")]
		[FieldOffset(Offset = "0x10")]
		public IDynamicProperty Property;

		[Token(Token = "0x4000F0F")]
		[FieldOffset(Offset = "0x18")]
		public IDynamicMessageSink Sink;

		[Token(Token = "0x6001DD3")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DynamicPropertyReg()
		{
		}
	}

	[Token(Token = "0x4000F0D")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _properties;

	[Token(Token = "0x1700036D")]
	public bool HasProperties
	{
		[Token(Token = "0x6001DCD")]
		[Address(RVA = "0x19FAA30", Offset = "0x19F9030", VA = "0x1819FAA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x19FA650", Offset = "0x19F8C50", VA = "0x1819FA650")]
	public bool RegisterDynamicProperty(IDynamicProperty prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x19FA880", Offset = "0x19F8E80", VA = "0x1819FA880")]
	public bool UnregisterDynamicProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x19FA210", Offset = "0x19F8810", VA = "0x1819FA210")]
	public void NotifyMessage(bool start, IMessage msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x19FA0E0", Offset = "0x19F86E0", VA = "0x1819FA0E0")]
	private int FindProperty(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x19FA9C0", Offset = "0x19F8FC0", VA = "0x1819FA9C0")]
	public DynamicPropertyCollection()
	{
	}
}
