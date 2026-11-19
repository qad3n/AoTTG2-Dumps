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
[Token(Token = "0x2000173")]
[ComVisible(true)]
public class TypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x40005C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string ClassName;

	[Token(Token = "0x40005C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string AssemblyName;

	[Token(Token = "0x40005C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string MessageArg;

	[Token(Token = "0x40005C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal int ResourceId;

	[Token(Token = "0x17000152")]
	public override string Message
	{
		[Token(Token = "0x6000F08")]
		[Address(RVA = "0x5506A90", Offset = "0x5505A90", VA = "0x5506A90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x5506A20", Offset = "0x5505A20", VA = "0x5506A20")]
	public TypeLoadException()
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x5506A70", Offset = "0x5505A70", VA = "0x5506A70")]
	public TypeLoadException(string message)
	{
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x5506AA0", Offset = "0x5505AA0", VA = "0x5506AA0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x5506BD0", Offset = "0x5505BD0", VA = "0x5506BD0")]
	private TypeLoadException(string className, string assemblyName)
	{
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x5506C60", Offset = "0x5505C60", VA = "0x5506C60")]
	private TypeLoadException(string className, string assemblyName, string messageArg, int resourceId)
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x5506CF0", Offset = "0x5505CF0", VA = "0x5506CF0")]
	protected TypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x5506E50", Offset = "0x5505E50", VA = "0x5506E50", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
