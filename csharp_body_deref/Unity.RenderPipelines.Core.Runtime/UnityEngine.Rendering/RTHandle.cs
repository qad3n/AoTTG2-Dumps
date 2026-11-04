// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandle
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B47670", Offset = "0x2B45C70", VA = "0x182B47670")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x2B47760", Offset = "0x2B45D60", VA = "0x182B47760")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public bool useScaling
	{
		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x1CAC5A0", Offset = "0x1CAABA0", VA = "0x181CAC5A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x1CAC5D0", Offset = "0x1CAABD0", VA = "0x181CAC5D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public Vector2Int referenceSize
	{
		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x1C3FBC0", Offset = "0x1C3E1C0", VA = "0x181C3FBC0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x1C3FC60", Offset = "0x1C3E260", VA = "0x181C3FC60")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x2B47610", Offset = "0x2B45C10", VA = "0x182B47610")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x17000177")]
	public RenderTexture rt
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public Texture externalTexture
	{
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public RenderTargetIdentifier nameID
	{
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x2B475F0", Offset = "0x2B45BF0", VA = "0x182B475F0")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x1700017A")]
	public string name
	{
		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public bool isMSAAEnabled
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x2B47280", Offset = "0x2B45880", VA = "0x182B47280")]
	public void SetCustomHandleProperties(in RTHandleProperties properties)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x2B46E50", Offset = "0x2B45450", VA = "0x182B46E50")]
	public void ClearCustomHandleProperties()
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x2B475B0", Offset = "0x2B45BB0", VA = "0x182B475B0")]
	internal RTHandle(RTHandleSystem owner)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x2B47690", Offset = "0x2B45C90", VA = "0x182B47690")]
	public static implicit operator RenderTargetIdentifier(RTHandle handle)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x2B476E0", Offset = "0x2B45CE0", VA = "0x182B476E0")]
	public static implicit operator Texture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x2B476D0", Offset = "0x2B45CD0", VA = "0x182B476D0")]
	public static implicit operator RenderTexture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x2B472A0", Offset = "0x2B458A0", VA = "0x182B472A0")]
	internal void SetRenderTexture(RenderTexture rt, bool transferOwnership = true)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x2B47390", Offset = "0x2B45990", VA = "0x182B47390")]
	internal void SetTexture(Texture tex)
	{
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x2B47330", Offset = "0x2B45930", VA = "0x182B47330")]
	internal void SetTexture(RenderTargetIdentifier tex)
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x2B46F40", Offset = "0x2B45540", VA = "0x182B46F40")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x2B47160", Offset = "0x2B45760", VA = "0x182B47160")]
	public void Release()
	{
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x2B470D0", Offset = "0x2B456D0", VA = "0x182B470D0")]
	public Vector2Int GetScaledSize(Vector2Int refSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x2B47020", Offset = "0x2B45620", VA = "0x182B47020")]
	public Vector2Int GetScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x2B474C0", Offset = "0x2B45AC0", VA = "0x182B474C0")]
	public void SwitchToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop, bool copyContents = false)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x2B46E60", Offset = "0x2B45460", VA = "0x182B46E60")]
	public void CopyToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop)
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x2B47410", Offset = "0x2B45A10", VA = "0x182B47410")]
	public void SwitchOutFastMemory(CommandBuffer cmd, bool copyContents = true)
	{
	}
}
