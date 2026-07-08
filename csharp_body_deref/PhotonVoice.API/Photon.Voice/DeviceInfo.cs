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
		[Address(RVA = "0x3C23BD0", Offset = "0x3C23BD0", VA = "0x3C23BD0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x3C23BE0", Offset = "0x3C23BE0", VA = "0x3C23BE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int IDInt
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x3C23BF0", Offset = "0x3C23BF0", VA = "0x3C23BF0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3C23C00", Offset = "0x3C23C00", VA = "0x3C23C00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public string IDString
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x3C23C10", Offset = "0x3C23C10", VA = "0x3C23C10")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x3C23C20", Offset = "0x3C23C20", VA = "0x3C23C20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public string Name
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x3C23C30", Offset = "0x3C23C30", VA = "0x3C23C30")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x3C23C40", Offset = "0x3C23C40", VA = "0x3C23C40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public DeviceFeatures Features
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3C23C50", Offset = "0x3C23C50", VA = "0x3C23C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3C23960", Offset = "0x3C23960", VA = "0x3C23960")]
	private DeviceInfo(bool isDefault, int idInt, string idString, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3C23A00", Offset = "0x3C23A00", VA = "0x3C23A00")]
	public DeviceInfo(int id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3C23AA0", Offset = "0x3C23AA0", VA = "0x3C23AA0")]
	public DeviceInfo(string id, string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3C23B40", Offset = "0x3C23B40", VA = "0x3C23B40")]
	public DeviceInfo(string name, [Optional] DeviceFeatures features)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3C23CC0", Offset = "0x3C23CC0", VA = "0x3C23CC0")]
	public static bool operator ==(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3C23E20", Offset = "0x3C23E20", VA = "0x3C23E20")]
	public static bool operator !=(DeviceInfo d1, DeviceInfo d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3C23DB0", Offset = "0x3C23DB0", VA = "0x3C23DB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3C23F10", Offset = "0x3C23F10", VA = "0x3C23F10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3C23F70", Offset = "0x3C23F70", VA = "0x3C23F70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
