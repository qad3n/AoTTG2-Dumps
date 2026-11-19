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
	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x10")]
	private readonly Version _version;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x18")]
	private readonly PlatformID _platform;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _servicePack;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x28")]
	private string _versionString;

	[Token(Token = "0x17000113")]
	public PlatformID Platform
	{
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x54E1B40", Offset = "0x54E0B40", VA = "0x54E1B40")]
		get
		{
			return default(PlatformID);
		}
	}

	[Token(Token = "0x17000114")]
	public string VersionString
	{
		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x54E1BD0", Offset = "0x54E0BD0", VA = "0x54E1BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x54E19B0", Offset = "0x54E09B0", VA = "0x54E19B0")]
	public OperatingSystem(PlatformID platform, Version version)
	{
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x54E19C0", Offset = "0x54E09C0", VA = "0x54E19C0")]
	internal OperatingSystem(PlatformID platform, Version version, string servicePack)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x54E1B00", Offset = "0x54E0B00", VA = "0x54E1B00", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x54E1B50", Offset = "0x54E0B50", VA = "0x54E1B50", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x54E1BC0", Offset = "0x54E0BC0", VA = "0x54E1BC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
