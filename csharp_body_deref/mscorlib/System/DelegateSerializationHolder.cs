// ==================== AoTTG2 cross-reference ====================
// Type: System.DelegateSerializationHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001AD")]
internal class DelegateSerializationHolder : ISerializable, IObjectReference
{
	[Serializable]
	[Token(Token = "0x20001AE")]
	private class DelegateEntry
	{
		[Token(Token = "0x40006FB")]
		[FieldOffset(Offset = "0x10")]
		private string type;

		[Token(Token = "0x40006FC")]
		[FieldOffset(Offset = "0x18")]
		private string assembly;

		[Token(Token = "0x40006FD")]
		[FieldOffset(Offset = "0x20")]
		private object target;

		[Token(Token = "0x40006FE")]
		[FieldOffset(Offset = "0x28")]
		private string targetTypeAssembly;

		[Token(Token = "0x40006FF")]
		[FieldOffset(Offset = "0x30")]
		private string targetTypeName;

		[Token(Token = "0x4000700")]
		[FieldOffset(Offset = "0x38")]
		private string methodName;

		[Token(Token = "0x4000701")]
		[FieldOffset(Offset = "0x40")]
		public DelegateEntry delegateEntry;

		[Token(Token = "0x6000FE3")]
		[Address(RVA = "0x1B7DEA0", Offset = "0x1B7C4A0", VA = "0x181B7DEA0")]
		public DelegateEntry(Delegate del, string targetLabel)
		{
		}

		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x1B7DBF0", Offset = "0x1B7C1F0", VA = "0x181B7DBF0")]
		public Delegate DeserializeDelegate(SerializationInfo info, int index)
		{
			return null;
		}
	}

	[Token(Token = "0x40006FA")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _delegate;

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x1B7E300", Offset = "0x1B7C900", VA = "0x181B7E300")]
	private DelegateSerializationHolder(SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x1B7E080", Offset = "0x1B7C680", VA = "0x181B7E080")]
	public static void GetDelegateData(Delegate instance, SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x1B7E2C0", Offset = "0x1B7C8C0", VA = "0x181B7E2C0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
