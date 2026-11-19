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
[Token(Token = "0x20000F8")]
public class ObjectDisposedException : InvalidOperationException
{
	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x90")]
	private string _objectName;

	[Token(Token = "0x1700009D")]
	public override string Message
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x54CC560", Offset = "0x54CB560", VA = "0x54CC560", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public string ObjectName
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x54CC4F0", Offset = "0x54CB4F0", VA = "0x54CC4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x54CC260", Offset = "0x54CB260", VA = "0x54CC260")]
	private ObjectDisposedException()
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x54CC300", Offset = "0x54CB300", VA = "0x54CC300")]
	public ObjectDisposedException(string objectName)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x54CC2C0", Offset = "0x54CB2C0", VA = "0x54CC2C0")]
	public ObjectDisposedException(string objectName, string message)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x54CC370", Offset = "0x54CB370", VA = "0x54CC370")]
	protected ObjectDisposedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x54CC400", Offset = "0x54CB400", VA = "0x54CC400", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
