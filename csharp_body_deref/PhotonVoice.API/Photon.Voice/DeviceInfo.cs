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

[Token(Token = "0x2000033")]
public struct DeviceInfo
{
	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DeviceFeatures features;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool useStringID;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly DeviceInfo Default;

	[Token(Token = "0x1700003F")]
	public bool IsDefault
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x3F19520", Offset = "0x3F19520", VA = "0x3F19520")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x3F19530", Offset = "0x3F19530", VA = "0x3F19530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int IDInt
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x3F19540", Offset = "0x3F19540", VA = "0x3F19540")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3F19550", Offset = "0x3F19550", VA = "0x3F19550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public string IDString
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x3F19560", Offset = "0x3F19560", VA = "0x3F19560")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x3F19570", Offset = "0x3F19570", VA = "0x3F19570")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public string Name
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x3F19580", Offset = "0x3F19580", VA = "0x3F19580")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x3F19590", Offset = "0x3F19590", VA = "0x3F19590")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public DeviceFeatures Features
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3F195A0", Offset = "0x3F195A0", VA = "0x3F195A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3F192B0", Offset = "0x3F192B0", VA = "0x3F192B0")]
	private DeviceInfo(bool isDefault, int idInt, string idString, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3F19350", Offset = "0x3F19350", VA = "0x3F19350")]
	public DeviceInfo(int id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3F193F0", Offset = "0x3F193F0", VA = "0x3F193F0")]
	public DeviceInfo(string id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3F19490", Offset = "0x3F19490", VA = "0x3F19490")]
	public DeviceInfo(string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3F19610", Offset = "0x3F19610", VA = "0x3F19610")]
	public static bool operator ==(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3F19770", Offset = "0x3F19770", VA = "0x3F19770")]
	public static bool operator !=(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3F19700", Offset = "0x3F19700", VA = "0x3F19700", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3F19860", Offset = "0x3F19860", VA = "0x3F19860", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3F198C0", Offset = "0x3F198C0", VA = "0x3F198C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
