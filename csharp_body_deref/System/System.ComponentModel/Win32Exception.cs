// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Win32Exception
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x200031B")]
public class Win32Exception : ExternalException, ISerializable
{
	[Token(Token = "0x4000EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private readonly int nativeErrorCode;

	[Token(Token = "0x1700048E")]
	public int NativeErrorCode
	{
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x48DE790", Offset = "0x48DE790", VA = "0x48DE790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x48DDB90", Offset = "0x48DDB90", VA = "0x48DDB90")]
	public Win32Exception()
	{
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x48DDC00", Offset = "0x48DDC00", VA = "0x48DDC00")]
	public Win32Exception(int error)
	{
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x48DE620", Offset = "0x48DE620", VA = "0x48DE620")]
	public Win32Exception(int error, string message)
	{
	}

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x48DE640", Offset = "0x48DE640", VA = "0x48DE640")]
	public Win32Exception(string message)
	{
	}

	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x48DE6A0", Offset = "0x48DE6A0", VA = "0x48DE6A0")]
	public Win32Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x48DE710", Offset = "0x48DE710", VA = "0x48DE710")]
	protected Win32Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x48DE7A0", Offset = "0x48DE7A0", VA = "0x48DE7A0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x48DDC30", Offset = "0x48DDC30", VA = "0x48DDC30")]
	internal static string GetErrorMessage(int error)
	{
		return null;
	}
}
