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
[Token(Token = "0x2000185")]
internal class DelegateSerializationHolder : ISerializable, IObjectReference
{
	[Serializable]
	[Token(Token = "0x2000186")]
	private class DelegateEntry
	{
		[Token(Token = "0x4000659")]
		[FieldOffset(Offset = "0x10")]
		private string type;

		[Token(Token = "0x400065A")]
		[FieldOffset(Offset = "0x18")]
		private string assembly;

		[Token(Token = "0x400065B")]
		[FieldOffset(Offset = "0x20")]
		private object target;

		[Token(Token = "0x400065C")]
		[FieldOffset(Offset = "0x28")]
		private string targetTypeAssembly;

		[Token(Token = "0x400065D")]
		[FieldOffset(Offset = "0x30")]
		private string targetTypeName;

		[Token(Token = "0x400065E")]
		[FieldOffset(Offset = "0x38")]
		private string methodName;

		[Token(Token = "0x400065F")]
		[FieldOffset(Offset = "0x40")]
		public DelegateEntry delegateEntry;

		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x550FFC0", Offset = "0x550EFC0", VA = "0x550FFC0")]
		public DelegateEntry(Delegate del, string targetLabel)
		{
		}

		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0x550FD80", Offset = "0x550ED80", VA = "0x550FD80")]
		public Delegate DeserializeDelegate(SerializationInfo info, int index)
		{
			return null;
		}
	}

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _delegate;

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x550FAF0", Offset = "0x550EAF0", VA = "0x550FAF0")]
	private DelegateSerializationHolder(SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x550F6B0", Offset = "0x550E6B0", VA = "0x550F6B0")]
	public static void GetDelegateData(Delegate instance, SerializationInfo info, StreamingContext ctx)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x5510180", Offset = "0x550F180", VA = "0x5510180", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x55101C0", Offset = "0x550F1C0", VA = "0x55101C0", Slot = "5")]
	public object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
