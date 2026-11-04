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
[Token(Token = "0x200016A")]
public sealed class OperatingSystem : ISerializable, ICloneable
{
	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x10")]
	private readonly Version _version;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x18")]
	private readonly PlatformID _platform;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _servicePack;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x28")]
	private string _versionString;

	[Token(Token = "0x17000113")]
	public PlatformID Platform
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(PlatformID);
		}
	}

	[Token(Token = "0x17000114")]
	public string VersionString
	{
		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x1B44EF0", Offset = "0x1B434F0", VA = "0x181B44EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x1B450D0", Offset = "0x1B436D0", VA = "0x181B450D0")]
	public OperatingSystem(PlatformID platform, Version version)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x1B450F0", Offset = "0x1B436F0", VA = "0x181B450F0")]
	internal OperatingSystem(PlatformID platform, Version version, string servicePack)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x1B44EB0", Offset = "0x1B434B0", VA = "0x181B44EB0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x1B44E40", Offset = "0x1B43440", VA = "0x181B44E40", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x1B44EF0", Offset = "0x1B434F0", VA = "0x181B44EF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
