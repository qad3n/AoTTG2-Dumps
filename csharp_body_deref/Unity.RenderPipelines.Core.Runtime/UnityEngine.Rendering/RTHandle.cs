using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000184")]
public class RTHandle
{
	[Token(Token = "0x40006A3")]
	[FieldOffset(Offset = "0x10")]
	internal RTHandleSystem m_Owner;

	[Token(Token = "0x40006A4")]
	[FieldOffset(Offset = "0x18")]
	internal RenderTexture m_RT;

	[Token(Token = "0x40006A5")]
	[FieldOffset(Offset = "0x20")]
	internal Texture m_ExternalTexture;

	[Token(Token = "0x40006A6")]
	[FieldOffset(Offset = "0x28")]
	internal RenderTargetIdentifier m_NameID;

	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x50")]
	internal bool m_EnableMSAA;

	[Token(Token = "0x40006A8")]
	[FieldOffset(Offset = "0x51")]
	internal bool m_EnableRandomWrite;

	[Token(Token = "0x40006A9")]
	[FieldOffset(Offset = "0x52")]
	internal bool m_EnableHWDynamicScale;

	[Token(Token = "0x40006AA")]
	[FieldOffset(Offset = "0x58")]
	internal string m_Name;

	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x60")]
	internal bool m_UseCustomHandleScales;

	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x64")]
	internal RTHandleProperties m_CustomHandleProperties;

	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0xA0")]
	internal ScaleFunc scaleFunc;

	[Token(Token = "0x1700013D")]
	public Vector2 scaleFactor
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x48BCA90", Offset = "0x48BCA90", VA = "0x48BCA90")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x48BCAA0", Offset = "0x48BCAA0", VA = "0x48BCAA0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool useScaling
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x48BCAB0", Offset = "0x48BCAB0", VA = "0x48BCAB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x48BCAC0", Offset = "0x48BCAC0", VA = "0x48BCAC0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public Vector2Int referenceSize
	{
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x48BCAD0", Offset = "0x48BCAD0", VA = "0x48BCAD0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x48BCAE0", Offset = "0x48BCAE0", VA = "0x48BCAE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x48BCAF0", Offset = "0x48BCAF0", VA = "0x48BCAF0")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x17000141")]
	public RenderTexture rt
	{
		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x48BCB40", Offset = "0x48BCB40", VA = "0x48BCB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public RenderTargetIdentifier nameID
	{
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x48BCB50", Offset = "0x48BCB50", VA = "0x48BCB50")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x17000143")]
	public string name
	{
		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x48BCB70", Offset = "0x48BCB70", VA = "0x48BCB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public bool isMSAAEnabled
	{
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x48BCB80", Offset = "0x48BCB80", VA = "0x48BCB80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x48BCA60", Offset = "0x48BCA60", VA = "0x48BCA60")]
	public void SetCustomHandleProperties(in RTHandleProperties properties)
	{
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x48BCA80", Offset = "0x48BCA80", VA = "0x48BCA80")]
	public void ClearCustomHandleProperties()
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x48BCB90", Offset = "0x48BCB90", VA = "0x48BCB90")]
	internal RTHandle(RTHandleSystem owner)
	{
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x48AB540", Offset = "0x48AB540", VA = "0x48AB540")]
	public static implicit operator RenderTargetIdentifier(RTHandle handle)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x48BCBC0", Offset = "0x48BCBC0", VA = "0x48BCBC0")]
	public static implicit operator Texture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x48BCC40", Offset = "0x48BCC40", VA = "0x48BCC40")]
	public static implicit operator RenderTexture(RTHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x48BCC50", Offset = "0x48BCC50", VA = "0x48BCC50")]
	internal void SetRenderTexture(RenderTexture rt)
	{
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x48BCCD0", Offset = "0x48BCCD0", VA = "0x48BCCD0")]
	internal void SetTexture(Texture tex)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x48BCD50", Offset = "0x48BCD50", VA = "0x48BCD50")]
	internal void SetTexture(RenderTargetIdentifier tex)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x48BCDA0", Offset = "0x48BCDA0", VA = "0x48BCDA0")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x48BCE50", Offset = "0x48BCE50", VA = "0x48BCE50")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x48BCF30", Offset = "0x48BCF30", VA = "0x48BCF30")]
	public Vector2Int GetScaledSize(Vector2Int refSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x48BD190", Offset = "0x48BD190", VA = "0x48BD190")]
	public Vector2Int GetScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x48BD3F0", Offset = "0x48BD3F0", VA = "0x48BD3F0")]
	public void SwitchToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop, bool copyContents = false)
	{
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x48BD490", Offset = "0x48BD490", VA = "0x48BD490")]
	public void CopyToFastMemory(CommandBuffer cmd, float residencyFraction = 1f, FastMemoryFlags flags = FastMemoryFlags.SpillTop)
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x48BD530", Offset = "0x48BD530", VA = "0x48BD530")]
	public void SwitchOutFastMemory(CommandBuffer cmd, bool copyContents = true)
	{
	}
}
