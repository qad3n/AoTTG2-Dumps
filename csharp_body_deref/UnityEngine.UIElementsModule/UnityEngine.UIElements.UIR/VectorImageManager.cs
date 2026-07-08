using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004DE")]
internal class VectorImageManager : IDisposable
{
	[Token(Token = "0x4000FE1")]
	[FieldOffset(Offset = "0x0")]
	public static List<VectorImageManager> instances;

	[Token(Token = "0x4000FE2")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerRegister;

	[Token(Token = "0x4000FE3")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker s_MarkerUnregister;

	[Token(Token = "0x4000FE4")]
	[FieldOffset(Offset = "0x10")]
	private readonly AtlasBase m_Atlas;

	[Token(Token = "0x4000FE5")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<VectorImage, VectorImageRenderInfo> m_Registered;

	[Token(Token = "0x4000FE6")]
	[FieldOffset(Offset = "0x20")]
	private VectorImageRenderInfoPool m_RenderInfoPool;

	[Token(Token = "0x4000FE7")]
	[FieldOffset(Offset = "0x28")]
	private GradientRemapPool m_GradientRemapPool;

	[Token(Token = "0x4000FE8")]
	[FieldOffset(Offset = "0x30")]
	private GradientSettingsAtlas m_GradientSettingsAtlas;

	[Token(Token = "0x4000FE9")]
	[FieldOffset(Offset = "0x38")]
	private bool m_LoggedExhaustedSettingsAtlas;

	[Token(Token = "0x17000792")]
	public Texture2D atlas
	{
		[Token(Token = "0x6001E21")]
		[Address(RVA = "0x4C836B0", Offset = "0x4C836B0", VA = "0x4C836B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000793")]
	protected bool disposed
	{
		[Token(Token = "0x6001E23")]
		[Address(RVA = "0x4C838B0", Offset = "0x4C838B0", VA = "0x4C838B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E24")]
		[Address(RVA = "0x4C838C0", Offset = "0x4C838C0", VA = "0x4C838C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x4C836D0", Offset = "0x4C836D0", VA = "0x4C836D0")]
	public VectorImageManager(AtlasBase atlas)
	{
	}

	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x4C838D0", Offset = "0x4C838D0", VA = "0x4C838D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x4C83940", Offset = "0x4C83940", VA = "0x4C83940", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x4C83A60", Offset = "0x4C83A60", VA = "0x4C83A60")]
	public void Commit()
	{
	}

	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x4C83A90", Offset = "0x4C83A90", VA = "0x4C83A90")]
	public GradientRemap AddUser(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x4C83B80", Offset = "0x4C83B80", VA = "0x4C83B80")]
	private VectorImageRenderInfo Register(VectorImage vi, VisualElement context)
	{
		return null;
	}
}
