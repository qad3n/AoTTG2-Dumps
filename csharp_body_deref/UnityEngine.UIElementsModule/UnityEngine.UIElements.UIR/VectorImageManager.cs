// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.VectorImageManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FAAFE0", Offset = "0x4FAAFE0", VA = "0x4FAAFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000793")]
	protected bool disposed
	{
		[Token(Token = "0x6001E23")]
		[Address(RVA = "0x4FAB1E0", Offset = "0x4FAB1E0", VA = "0x4FAB1E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E24")]
		[Address(RVA = "0x4FAB1F0", Offset = "0x4FAB1F0", VA = "0x4FAB1F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x4FAB000", Offset = "0x4FAB000", VA = "0x4FAB000")]
	public VectorImageManager(AtlasBase atlas)
	{
	}

	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x4FAB200", Offset = "0x4FAB200", VA = "0x4FAB200", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x4FAB270", Offset = "0x4FAB270", VA = "0x4FAB270", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x4FAB390", Offset = "0x4FAB390", VA = "0x4FAB390")]
	public void Commit()
	{
	}

	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x4FAB3C0", Offset = "0x4FAB3C0", VA = "0x4FAB3C0")]
	public GradientRemap AddUser(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x4FAB4B0", Offset = "0x4FAB4B0", VA = "0x4FAB4B0")]
	private VectorImageRenderInfo Register(VectorImage vi, VisualElement context)
	{
		return null;
	}
}
