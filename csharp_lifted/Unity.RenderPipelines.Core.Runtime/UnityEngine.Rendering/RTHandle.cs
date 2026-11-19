// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200019C")]
public class RTHandle
{
	[Token(Token = "0x40007E9")]
	[FieldOffset(Offset = "0x10")]
	internal RTHandleSystem m_Owner;

	[Token(Token = "0x40007EA")]
	[FieldOffset(Offset = "0x18")]
	internal RenderTexture m_RT;

	[Token(Token = "0x40007EB")]
	[FieldOffset(Offset = "0x20")]
	internal Texture m_ExternalTexture;

	[Token(Token = "0x40007EC")]
	[FieldOffset(Offset = "0x28")]
	internal RenderTargetIdentifier m_NameID;

	[Token(Token = "0x40007ED")]
	[FieldOffset(Offset = "0x50")]
	internal bool m_EnableMSAA;

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x51")]
	internal bool m_EnableRandomWrite;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x52")]
	internal bool m_EnableHWDynamicScale;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x53")]
	internal bool m_RTHasOwnership;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x58")]
	internal string m_Name;

	[Token(Token = "0x40007F2")]
	[FieldOffset(Offset = "0x60")]
	internal bool m_UseCustomHandleScales;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x64")]
	internal RTHandleProperties m_CustomHandleProperties;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0xA0")]
	internal ScaleFunc scaleFunc;

	[Token(Token = "0x17000173")]
	public Vector2 scaleFactor
	{
		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x652B210", Offset = "0x652A210", VA = "0x652B210")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x652B220", Offset = "0x652A220", VA = "0x652B220")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public bool useScaling
	{
		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x652B230", Offset = "0x652A230", VA = "0x652B230")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x652B240", Offset = "0x652A240", VA = "0x652B240")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public Vector2Int referenceSize
	{
		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x652B250", Offset = "0x652A250", VA = "0x652B250")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x652B260", Offset = "0x652A260", VA = "0x652B260")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x652B270", Offset = "0x652A270", VA = "0x652B270")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x17000177")]
	public RenderTexture rt
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x652B2C0", Offset = "0x652A2C0", VA = "0x652B2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public Texture externalTexture
	{
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x652B2D0", Offset = "0x652A2D0", VA = "0x652B2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public RenderTargetIdentifier nameID
	{
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x652B2E0", Offset = "0x652A2E0", VA = "0x652B2E0")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x1700017A")]
	public string name
	{
		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x652B300", Offset = "0x652A300", VA = "0x652B300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public bool isMSAAEnabled
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x652B310", Offset = "0x652A310", VA = "0x652B310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x652B1E0", Offset = "0x652A1E0", VA = "0x652B1E0")]
	public void SetCustomHandleProperties(in RTHandleProperties properties)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x652B200", Offset = "0x652A200", VA = "0x652B200")]
	public void ClearCustomHandleProperties()
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x652B320", Offset = "0x652A320", VA = "0x652B320")]
	internal RTHandle(RTHandleSystem owner)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x6528AD0", Offset = "0x6527AD0", VA = "0x6528AD0")]
	public static implicit operator RenderTargetIdentifier(RTHandle handle)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x652B350", Offset = "0x652A350", VA = "0x652B350")]
	public static implicit operator Texture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x652B3C0", Offset = "0x652A3C0", VA = "0x652B3C0")]
	public static implicit operator RenderTexture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x652B3D0", Offset = "0x652A3D0", VA = "0x652B3D0")]
	internal void SetRenderTexture(RenderTexture rt, bool transferOwnership = true)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x652B450", Offset = "0x652A450", VA = "0x652B450")]
	internal void SetTexture(Texture tex)
	{
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x652B130", Offset = "0x652A130", VA = "0x652B130")]
	internal void SetTexture(RenderTargetIdentifier tex)
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x652B4D0", Offset = "0x652A4D0", VA = "0x652B4D0")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x652B5A0", Offset = "0x652A5A0", VA = "0x652B5A0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x652B710", Offset = "0x652A710", VA = "0x652B710")]
	public Vector2Int GetScaledSize(Vector2Int refSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x652B950", Offset = "0x652A950", VA = "0x652B950")]
	public Vector2Int GetScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x652BB90", Offset = "0x652AB90", VA = "0x652BB90")]
	public void SwitchToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop, bool copyContents = false)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x652BC60", Offset = "0x652AC60", VA = "0x652BC60")]
	public void CopyToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop)
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x652BD20", Offset = "0x652AD20", VA = "0x652BD20")]
	public void SwitchOutFastMemory(CommandBuffer cmd, bool copyContents = true)
	{
	}
}
