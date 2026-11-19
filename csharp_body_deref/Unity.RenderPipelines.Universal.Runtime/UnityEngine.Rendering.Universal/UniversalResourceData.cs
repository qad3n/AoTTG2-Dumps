// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalResourceData
// Update status: unchanged since the previous dump
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
	[FieldOffset(Offset = "0x1C")]
	private TextureHandle _backBufferColor;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x2C")]
	private TextureHandle _backBufferDepth;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x3C")]
	private TextureHandle _cameraColor;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x4C")]
	private TextureHandle _cameraDepth;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x5C")]
	private TextureHandle _mainShadowsTexture;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x6C")]
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
		[Address(RVA = "0x6641CD0", Offset = "0x6640CD0", VA = "0x6641CD0")]
		[CompilerGenerated]
		get
		{
			return default(ActiveID);
		}
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x6641CE0", Offset = "0x6640CE0", VA = "0x6641CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public TextureHandle activeColorTexture
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x6630650", Offset = "0x662F650", VA = "0x6630650")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x1700019A")]
	internal ActiveID activeDepthID
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x6641CF0", Offset = "0x6640CF0", VA = "0x6641CF0")]
		[CompilerGenerated]
		get
		{
			return default(ActiveID);
		}
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x6641D00", Offset = "0x6640D00", VA = "0x6641D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public TextureHandle activeDepthTexture
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x66307C0", Offset = "0x662F7C0", VA = "0x66307C0")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x1700019C")]
	public bool isActiveTargetBackBuffer
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x662A0E0", Offset = "0x66290E0", VA = "0x662A0E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public TextureHandle backBufferColor
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x663FB10", Offset = "0x663EB10", VA = "0x663FB10")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x663FCE0", Offset = "0x663ECE0", VA = "0x663FCE0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public TextureHandle backBufferDepth
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x663EA70", Offset = "0x663DA70", VA = "0x663EA70")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x663FD60", Offset = "0x663ED60", VA = "0x663FD60")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public TextureHandle cameraColor
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x66397A0", Offset = "0x66387A0", VA = "0x66397A0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x663FC40", Offset = "0x663EC40", VA = "0x663FC40")]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public TextureHandle cameraDepth
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x66398F0", Offset = "0x66388F0", VA = "0x66398F0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x663FDE0", Offset = "0x663EDE0", VA = "0x663FDE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	public TextureHandle mainShadowsTexture
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x6630930", Offset = "0x662F930", VA = "0x6630930")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x663EA80", Offset = "0x663DA80", VA = "0x663EA80")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public TextureHandle additionalShadowsTexture
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x6630940", Offset = "0x662F940", VA = "0x6630940")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x663EB00", Offset = "0x663DB00", VA = "0x663EB00")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public TextureHandle[] gBuffer
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x663F830", Offset = "0x663E830", VA = "0x663F830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x663F820", Offset = "0x663E820", VA = "0x663F820")]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public TextureHandle cameraOpaqueTexture
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x6641D10", Offset = "0x6640D10", VA = "0x6641D10")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x663FA80", Offset = "0x663EA80", VA = "0x663FA80")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public TextureHandle cameraDepthTexture
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x6634940", Offset = "0x6633940", VA = "0x6634940")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x663FE60", Offset = "0x663EE60", VA = "0x663FE60")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public TextureHandle cameraNormalsTexture
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x66404D0", Offset = "0x663F4D0", VA = "0x66404D0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x663FFE0", Offset = "0x663EFE0", VA = "0x663FFE0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public TextureHandle motionVectorColor
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x6634D30", Offset = "0x6633D30", VA = "0x6634D30")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x663FEE0", Offset = "0x663EEE0", VA = "0x663FEE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public TextureHandle motionVectorDepth
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x663F6C0", Offset = "0x663E6C0", VA = "0x663F6C0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x663FF60", Offset = "0x663EF60", VA = "0x663FF60")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public TextureHandle internalColorLut
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x663FC30", Offset = "0x663EC30", VA = "0x663FC30")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x663EB80", Offset = "0x663DB80", VA = "0x663EB80")]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	internal TextureHandle debugScreenColor
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x663FCC0", Offset = "0x663ECC0", VA = "0x663FCC0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x663FB20", Offset = "0x663EB20", VA = "0x663FB20")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	internal TextureHandle debugScreenDepth
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x663FCD0", Offset = "0x663ECD0", VA = "0x663FCD0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x663FBA0", Offset = "0x663EBA0", VA = "0x663FBA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public TextureHandle afterPostProcessColor
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x663FC20", Offset = "0x663EC20", VA = "0x663FC20")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x66403D0", Offset = "0x663F3D0", VA = "0x66403D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public TextureHandle overlayUITexture
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x663FB00", Offset = "0x663EB00", VA = "0x663FB00")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x6640450", Offset = "0x663F450", VA = "0x6640450")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public TextureHandle renderingLayersTexture
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x663F840", Offset = "0x663E840", VA = "0x663F840")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x6640060", Offset = "0x663F060", VA = "0x6640060")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public TextureHandle[] dBuffer
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x6630950", Offset = "0x662F950", VA = "0x6630950")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x6641D20", Offset = "0x6640D20", VA = "0x6641D20")]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public TextureHandle dBufferDepth
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x6641D30", Offset = "0x6640D30", VA = "0x6641D30")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x6641D40", Offset = "0x6640D40", VA = "0x6641D40")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public TextureHandle ssaoTexture
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x6630960", Offset = "0x662F960", VA = "0x6630960")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x6641DC0", Offset = "0x6640DC0", VA = "0x6641DC0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	internal TextureHandle irradianceTexture
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x6641E40", Offset = "0x6640E40", VA = "0x6641E40")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x6641E50", Offset = "0x6640E50", VA = "0x6641E50")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	internal TextureHandle stpDebugView
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x6635000", Offset = "0x6634000", VA = "0x6635000")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x6641ED0", Offset = "0x6640ED0", VA = "0x6641ED0")]
		set
		{
		}
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x6638230", Offset = "0x6637230", VA = "0x6638230")]
	public void SwitchActiveTexturesToBackbuffer()
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x6641F50", Offset = "0x6640F50", VA = "0x6641F50", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x6642960", Offset = "0x6641960", VA = "0x6642960")]
	public UniversalResourceData()
	{
	}
}
