// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DeviceInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000031")]
public struct DeviceInfo
{
	[Token(Token = "0x40000E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DeviceFeatures features;

	[Token(Token = "0x40000E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool useStringID;

	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly DeviceInfo Default;

	[Token(Token = "0x1700003F")]
	public bool IsDefault
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x57041D0", Offset = "0x57031D0", VA = "0x57041D0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x57041E0", Offset = "0x57031E0", VA = "0x57041E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int IDInt
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x57041F0", Offset = "0x57031F0", VA = "0x57041F0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x5704200", Offset = "0x5703200", VA = "0x5704200")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public string IDString
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x5704210", Offset = "0x5703210", VA = "0x5704210")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x5704220", Offset = "0x5703220", VA = "0x5704220")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public string Name
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x5704230", Offset = "0x5703230", VA = "0x5704230")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x5704240", Offset = "0x5703240", VA = "0x5704240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public DeviceFeatures Features
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x5704250", Offset = "0x5703250", VA = "0x5704250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x5703F60", Offset = "0x5702F60", VA = "0x5703F60")]
	private DeviceInfo(bool isDefault, int idInt, string idString, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5704000", Offset = "0x5703000", VA = "0x5704000")]
	public DeviceInfo(int id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x57040A0", Offset = "0x57030A0", VA = "0x57040A0")]
	public DeviceInfo(string id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x5704140", Offset = "0x5703140", VA = "0x5704140")]
	public DeviceInfo(string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x57042C0", Offset = "0x57032C0", VA = "0x57042C0")]
	public static bool operator ==(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5704420", Offset = "0x5703420", VA = "0x5704420")]
	public static bool operator !=(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x57043B0", Offset = "0x57033B0", VA = "0x57043B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x5704510", Offset = "0x5703510", VA = "0x5704510", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x5704570", Offset = "0x5703570", VA = "0x5704570", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
