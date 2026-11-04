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
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0xFA0680", Offset = "0xF9EC80", VA = "0x180FA0680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int IDInt
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public string IDString
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public string Name
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010A")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public DeviceFeatures Features
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x1D69770", Offset = "0x1D67D70", VA = "0x181D69770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1D69650", Offset = "0x1D67C50", VA = "0x181D69650")]
	private DeviceInfo(bool isDefault, int idInt, string idString, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1D69510", Offset = "0x1D67B10", VA = "0x181D69510")]
	public DeviceInfo(int id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1D696E0", Offset = "0x1D67CE0", VA = "0x181D696E0")]
	public DeviceInfo(string id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x1D695B0", Offset = "0x1D67BB0", VA = "0x181D695B0")]
	public DeviceInfo(string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1D697E0", Offset = "0x1D67DE0", VA = "0x181D697E0")]
	public static bool operator ==(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1D69870", Offset = "0x1D67E70", VA = "0x181D69870")]
	public static bool operator !=(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1D69110", Offset = "0x1D67710", VA = "0x181D69110", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1D69190", Offset = "0x1D67790", VA = "0x181D69190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1D69200", Offset = "0x1D67800", VA = "0x181D69200", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
