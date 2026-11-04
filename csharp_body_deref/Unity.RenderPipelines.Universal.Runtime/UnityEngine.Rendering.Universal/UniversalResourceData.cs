// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalResourceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DA")]
public class UniversalResourceData : UniversalResourceDataBase
{
	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x20")]
	private TextureHandle _backBufferColor;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x30")]
	private TextureHandle _backBufferDepth;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x40")]
	private TextureHandle _cameraColor;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x50")]
	private TextureHandle _cameraDepth;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x60")]
	private TextureHandle _mainShadowsTexture;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x70")]
	private TextureHandle _additionalShadowsTexture;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x80")]
	private TextureHandle[] _gBuffer;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x88")]
	private TextureHandle _cameraOpaqueTexture;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x98")]
	private TextureHandle _cameraDepthTexture;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0xA8")]
	private TextureHandle _cameraNormalsTexture;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0xB8")]
	private TextureHandle _motionVectorColor;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0xC8")]
	private TextureHandle _motionVectorDepth;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0xD8")]
	private TextureHandle _internalColorLut;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0xE8")]
	internal TextureHandle _debugScreenColor;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0xF8")]
	internal TextureHandle _debugScreenDepth;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x108")]
	private TextureHandle _afterPostProcessColor;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x118")]
	private TextureHandle _overlayUITexture;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x128")]
	private TextureHandle _renderingLayersTexture;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x138")]
	private TextureHandle[] _dBuffer;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x140")]
	private TextureHandle _dBufferDepth;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x150")]
	private TextureHandle _ssaoTexture;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x160")]
	private TextureHandle _irradianceTexture;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x170")]
	private TextureHandle _stpDebugView;

	[Token(Token = "0x17000198")]
	internal ActiveID activeColorID
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(ActiveID);
		}
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public TextureHandle activeColorTexture
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x2C50B10", Offset = "0x2C4F110", VA = "0x182C50B10")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x1700019A")]
	internal ActiveID activeDepthID
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(ActiveID);
		}
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public TextureHandle activeDepthTexture
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x2C50C70", Offset = "0x2C4F270", VA = "0x182C50C70")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x1700019C")]
	public bool isActiveTargetBackBuffer
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x2C51030", Offset = "0x2C4F630", VA = "0x182C51030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public TextureHandle backBufferColor
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x2C50E30", Offset = "0x2C4F430", VA = "0x182C50E30")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x2C512C0", Offset = "0x2C4F8C0", VA = "0x182C512C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public TextureHandle backBufferDepth
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x2C50E60", Offset = "0x2C4F460", VA = "0x182C50E60")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x2C51340", Offset = "0x2C4F940", VA = "0x182C51340")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public TextureHandle cameraColor
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x2C41810", Offset = "0x2C3FE10", VA = "0x182C41810")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x2C419A0", Offset = "0x2C3FFA0", VA = "0x182C419A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public TextureHandle cameraDepth
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x2C41850", Offset = "0x2C3FE50", VA = "0x182C41850")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x2C41A30", Offset = "0x2C40030", VA = "0x182C41A30")]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	public TextureHandle mainShadowsTexture
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x2C41790", Offset = "0x2C3FD90", VA = "0x182C41790")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x2C41880", Offset = "0x2C3FE80", VA = "0x182C41880")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public TextureHandle additionalShadowsTexture
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x2C50DD0", Offset = "0x2C4F3D0", VA = "0x182C50DD0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x2C511C0", Offset = "0x2C4F7C0", VA = "0x182C511C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public TextureHandle[] gBuffer
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x2C50FC0", Offset = "0x2C4F5C0", VA = "0x182C50FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x2C516E0", Offset = "0x2C4FCE0", VA = "0x182C516E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public TextureHandle cameraOpaqueTexture
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x2C50EF0", Offset = "0x2C4F4F0", VA = "0x182C50EF0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x2C514C0", Offset = "0x2C4FAC0", VA = "0x182C514C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public TextureHandle cameraDepthTexture
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x2C50E90", Offset = "0x2C4F490", VA = "0x182C50E90")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x2C513C0", Offset = "0x2C4F9C0", VA = "0x182C513C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public TextureHandle cameraNormalsTexture
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x2C50EC0", Offset = "0x2C4F4C0", VA = "0x182C50EC0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x2C51440", Offset = "0x2C4FA40", VA = "0x182C51440")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public TextureHandle motionVectorColor
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x2C510A0", Offset = "0x2C4F6A0", VA = "0x182C510A0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x2C51800", Offset = "0x2C4FE00", VA = "0x182C51800")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public TextureHandle motionVectorDepth
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x2C510D0", Offset = "0x2C4F6D0", VA = "0x182C510D0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x2C51880", Offset = "0x2C4FE80", VA = "0x182C51880")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public TextureHandle internalColorLut
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x2C50FD0", Offset = "0x2C4F5D0", VA = "0x182C50FD0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x2C51700", Offset = "0x2C4FD00", VA = "0x182C51700")]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	internal TextureHandle debugScreenColor
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x2C50F60", Offset = "0x2C4F560", VA = "0x182C50F60")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x2C515E0", Offset = "0x2C4FBE0", VA = "0x182C515E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	internal TextureHandle debugScreenDepth
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x2C50F90", Offset = "0x2C4F590", VA = "0x182C50F90")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x2C51660", Offset = "0x2C4FC60", VA = "0x182C51660")]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public TextureHandle afterPostProcessColor
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x2C50E00", Offset = "0x2C4F400", VA = "0x182C50E00")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x2C51240", Offset = "0x2C4F840", VA = "0x182C51240")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public TextureHandle overlayUITexture
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x2C51100", Offset = "0x2C4F700", VA = "0x182C51100")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x2C51900", Offset = "0x2C4FF00", VA = "0x182C51900")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public TextureHandle renderingLayersTexture
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x2C51130", Offset = "0x2C4F730", VA = "0x182C51130")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x2C51980", Offset = "0x2C4FF80", VA = "0x182C51980")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public TextureHandle[] dBuffer
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x2C50F50", Offset = "0x2C4F550", VA = "0x182C50F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x2C515C0", Offset = "0x2C4FBC0", VA = "0x182C515C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public TextureHandle dBufferDepth
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x2C50F20", Offset = "0x2C4F520", VA = "0x182C50F20")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x2C51540", Offset = "0x2C4FB40", VA = "0x182C51540")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public TextureHandle ssaoTexture
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x2C51160", Offset = "0x2C4F760", VA = "0x182C51160")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x2C51A00", Offset = "0x2C50000", VA = "0x182C51A00")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	internal TextureHandle irradianceTexture
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x2C51000", Offset = "0x2C4F600", VA = "0x182C51000")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x2C51780", Offset = "0x2C4FD80", VA = "0x182C51780")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	internal TextureHandle stpDebugView
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x2C51190", Offset = "0x2C4F790", VA = "0x182C51190")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x2C51A80", Offset = "0x2C50080", VA = "0x182C51A80")]
		set
		{
		}
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x2C50A70", Offset = "0x2C4F070", VA = "0x182C50A70")]
	public void SwitchActiveTexturesToBackbuffer()
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x2C50290", Offset = "0x2C4E890", VA = "0x182C50290", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x2C50A80", Offset = "0x2C4F080", VA = "0x182C50A80")]
	public UniversalResourceData()
	{
	}
}
