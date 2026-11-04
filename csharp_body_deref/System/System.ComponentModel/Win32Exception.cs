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
[Token(Token = "0x2000226")]
public class Win32Exception : ExternalException, ISerializable
{
	[Token(Token = "0x40007F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private readonly int nativeErrorCode;

	[Token(Token = "0x170002FD")]
	public int NativeErrorCode
	{
		[Token(Token = "0x6000F2D")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x28EA5B0", Offset = "0x28E8BB0", VA = "0x1828EA5B0")]
	public Win32Exception()
	{
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x28EA760", Offset = "0x28E8D60", VA = "0x1828EA760")]
	public Win32Exception(int error)
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x28EA730", Offset = "0x28E8D30", VA = "0x1828EA730")]
	public Win32Exception(int error, string message)
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x28EA6B0", Offset = "0x28E8CB0", VA = "0x1828EA6B0")]
	public Win32Exception(string message)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x28EA530", Offset = "0x28E8B30", VA = "0x1828EA530")]
	public Win32Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x28EA620", Offset = "0x28E8C20", VA = "0x1828EA620")]
	protected Win32Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x28EA460", Offset = "0x28E8A60", VA = "0x1828EA460", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x28E9990", Offset = "0x28E7F90", VA = "0x1828E9990")]
	internal static string GetErrorMessage(int error)
	{
		return null;
	}
}
