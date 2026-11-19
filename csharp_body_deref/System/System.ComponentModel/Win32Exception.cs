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
[Token(Token = "0x20001E7")]
public class Win32Exception : ExternalException, ISerializable
{
	[Token(Token = "0x400072A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private readonly int nativeErrorCode;

	[Token(Token = "0x170002CE")]
	public int NativeErrorCode
	{
		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x627B830", Offset = "0x627A830", VA = "0x627B830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x627AC20", Offset = "0x6279C20", VA = "0x627AC20")]
	public Win32Exception()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x627AC90", Offset = "0x6279C90", VA = "0x627AC90")]
	public Win32Exception(int error)
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x627B6C0", Offset = "0x627A6C0", VA = "0x627B6C0")]
	public Win32Exception(int error, string message)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x627B6E0", Offset = "0x627A6E0", VA = "0x627B6E0")]
	public Win32Exception(string message)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x627B740", Offset = "0x627A740", VA = "0x627B740")]
	public Win32Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x627B7B0", Offset = "0x627A7B0", VA = "0x627B7B0")]
	protected Win32Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x627B840", Offset = "0x627A840", VA = "0x627B840", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x627ACC0", Offset = "0x6279CC0", VA = "0x627ACC0")]
	internal static string GetErrorMessage(int error)
	{
		return null;
	}
}
