// ==================== AoTTG2 cross-reference ====================
// Type: System.OperatingSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000142")]
public sealed class OperatingSystem : ISerializable, ICloneable
{
	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x10")]
	private readonly Version _version;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x18")]
	private readonly PlatformID _platform;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _servicePack;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x28")]
	private string _versionString;

	[Token(Token = "0x17000112")]
	public PlatformID Platform
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x3CDD9F0", Offset = "0x3CDD9F0", VA = "0x3CDD9F0")]
		get
		{
			return default(PlatformID);
		}
	}

	[Token(Token = "0x17000113")]
	public string VersionString
	{
		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x3CDDA80", Offset = "0x3CDDA80", VA = "0x3CDDA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x3CDD860", Offset = "0x3CDD860", VA = "0x3CDD860")]
	public OperatingSystem(PlatformID platform, Version version)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x3CDD870", Offset = "0x3CDD870", VA = "0x3CDD870")]
	internal OperatingSystem(PlatformID platform, Version version, string servicePack)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x3CDD9B0", Offset = "0x3CDD9B0", VA = "0x3CDD9B0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x3CDDA00", Offset = "0x3CDDA00", VA = "0x3CDDA00", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x3CDDA70", Offset = "0x3CDDA70", VA = "0x3CDDA70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
