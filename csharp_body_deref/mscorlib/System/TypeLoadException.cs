// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeLoadException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200019B")]
[ComVisible(true)]
public class TypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x4000662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string ClassName;

	[Token(Token = "0x4000663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string AssemblyName;

	[Token(Token = "0x4000664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string MessageArg;

	[Token(Token = "0x4000665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal int ResourceId;

	[Token(Token = "0x17000152")]
	public override string Message
	{
		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x1B916D0", Offset = "0x1B8FCD0", VA = "0x181B916D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x1B915E0", Offset = "0x1B8FBE0", VA = "0x181B915E0")]
	public TypeLoadException()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x1B915B0", Offset = "0x1B8FBB0", VA = "0x181B915B0")]
	public TypeLoadException(string message)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x1B91270", Offset = "0x1B8F870", VA = "0x181B91270")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x1B91630", Offset = "0x1B8FC30", VA = "0x181B91630")]
	private TypeLoadException(string className, string assemblyName)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x1B913B0", Offset = "0x1B8F9B0", VA = "0x181B913B0")]
	private TypeLoadException(string className, string assemblyName, string messageArg, int resourceId)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x1B91440", Offset = "0x1B8FA40", VA = "0x181B91440")]
	protected TypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x1B910B0", Offset = "0x1B8F6B0", VA = "0x181B910B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
