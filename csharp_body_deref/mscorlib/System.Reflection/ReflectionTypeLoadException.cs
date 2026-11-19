// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ReflectionTypeLoadException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004FB")]
public sealed class ReflectionTypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x170004E1")]
	public Type[] Types
	{
		[Token(Token = "0x60024FC")]
		[Address(RVA = "0x53DBC70", Offset = "0x53DAC70", VA = "0x53DBC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E2")]
	public Exception[] LoaderExceptions
	{
		[Token(Token = "0x60024FD")]
		[Address(RVA = "0x53DBC80", Offset = "0x53DAC80", VA = "0x53DBC80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	public override string Message
	{
		[Token(Token = "0x60024FE")]
		[Address(RVA = "0x53DBC90", Offset = "0x53DAC90", VA = "0x53DBC90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024F9")]
	[Address(RVA = "0x53DB9F0", Offset = "0x53DA9F0", VA = "0x53DB9F0")]
	public ReflectionTypeLoadException(Type[] classes, Exception[] exceptions)
	{
	}

	[Token(Token = "0x60024FA")]
	[Address(RVA = "0x53DBA40", Offset = "0x53DAA40", VA = "0x53DBA40")]
	private ReflectionTypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024FB")]
	[Address(RVA = "0x53DBB70", Offset = "0x53DAB70", VA = "0x53DBB70", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024FF")]
	[Address(RVA = "0x53DBE70", Offset = "0x53DAE70", VA = "0x53DBE70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002500")]
	[Address(RVA = "0x53DBCA0", Offset = "0x53DACA0", VA = "0x53DBCA0")]
	private string CreateString(bool isMessage)
	{
		return null;
	}
}
