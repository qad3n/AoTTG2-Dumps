// ==================== AoTTG2 cross-reference ====================
// Type: System.ObjectDisposedException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000120")]
public class ObjectDisposedException : InvalidOperationException
{
	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x90")]
	private string _objectName;

	[Token(Token = "0x1700009D")]
	public override string Message
	{
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x1B44CA0", Offset = "0x1B432A0", VA = "0x181B44CA0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public string ObjectName
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x1B44D50", Offset = "0x1B43350", VA = "0x181B44D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x1B44B80", Offset = "0x1B43180", VA = "0x181B44B80")]
	private ObjectDisposedException()
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x1B44C30", Offset = "0x1B43230", VA = "0x181B44C30")]
	public ObjectDisposedException(string objectName)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x1B44BE0", Offset = "0x1B431E0", VA = "0x181B44BE0")]
	public ObjectDisposedException(string objectName, string message)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x1B44AE0", Offset = "0x1B430E0", VA = "0x181B44AE0")]
	protected ObjectDisposedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x1B449F0", Offset = "0x1B42FF0", VA = "0x181B449F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
