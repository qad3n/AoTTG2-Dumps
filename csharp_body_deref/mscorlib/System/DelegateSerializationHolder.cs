using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000182")]
internal class DelegateSerializationHolder : ISerializable, IObjectReference
{
	[Serializable]
	[Token(Token = "0x2000183")]
	private class DelegateEntry
	{
		[Token(Token = "0x4000697")]
		[FieldOffset(Offset = "0x10")]
		private string type;

		[Token(Token = "0x4000698")]
		[FieldOffset(Offset = "0x18")]
		private string assembly;

		[Token(Token = "0x4000699")]
		[FieldOffset(Offset = "0x20")]
		private object target;

		[Token(Token = "0x400069A")]
		[FieldOffset(Offset = "0x28")]
		private string targetTypeAssembly;

		[Token(Token = "0x400069B")]
		[FieldOffset(Offset = "0x30")]
		private string targetTypeName;

		[Token(Token = "0x400069C")]
		[FieldOffset(Offset = "0x38")]
		private string methodName;

		[Token(Token = "0x400069D")]
		[FieldOffset(Offset = "0x40")]
		public DelegateEntry delegateEntry;

		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x5026AB0", Offset = "0x5026AB0", VA = "0x5026AB0")]
		public DelegateEntry(Delegate del, string targetLabel)
		{
		}

		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x5026870", Offset = "0x5026870", VA = "0x5026870")]
		public Delegate DeserializeDelegate(SerializationInfo info, int index)
		{
			return null;
		}
	}

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _delegate;

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x50265E0", Offset = "0x50265E0", VA = "0x50265E0")]
	private DelegateSerializationHolder(SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x5026130", Offset = "0x5026130", VA = "0x5026130")]
	public static void GetDelegateData(Delegate instance, SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x5026C70", Offset = "0x5026C70", VA = "0x5026C70", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x5026CB0", Offset = "0x5026CB0", VA = "0x5026CB0", Slot = "5")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
