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

[Token(Token = "0x20005D3")]
internal class VectorImageManager : IDisposable
{
	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x0")]
	public static List<VectorImageManager> instances;

	[Token(Token = "0x4001551")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerRegister;

	[Token(Token = "0x4001552")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker s_MarkerUnregister;

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x10")]
	private readonly AtlasBase m_Atlas;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<VectorImage, VectorImageRenderInfo> m_Registered;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0x20")]
	private VectorImageRenderInfoPool m_RenderInfoPool;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0x28")]
	private GradientRemapPool m_GradientRemapPool;

	[Token(Token = "0x4001557")]
	[FieldOffset(Offset = "0x30")]
	private GradientSettingsAtlas m_GradientSettingsAtlas;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0x38")]
	private bool m_LoggedExhaustedSettingsAtlas;

	[Token(Token = "0x17000AA2")]
	public Texture2D atlas
	{
		[Token(Token = "0x6002B58")]
		[Address(RVA = "0x6BB03A0", Offset = "0x6BAF3A0", VA = "0x6BB03A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AA3")]
	protected bool disposed
	{
		[Token(Token = "0x6002B5A")]
		[Address(RVA = "0x6BB05A0", Offset = "0x6BAF5A0", VA = "0x6BB05A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B5B")]
		[Address(RVA = "0x6BB05B0", Offset = "0x6BAF5B0", VA = "0x6BB05B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B59")]
	[Address(RVA = "0x6BB03C0", Offset = "0x6BAF3C0", VA = "0x6BB03C0")]
	public VectorImageManager(AtlasBase atlas)
	{
	}

	[Token(Token = "0x6002B5C")]
	[Address(RVA = "0x6BB05C0", Offset = "0x6BAF5C0", VA = "0x6BB05C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B5D")]
	[Address(RVA = "0x6BB0630", Offset = "0x6BAF630", VA = "0x6BB0630", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B5E")]
	[Address(RVA = "0x6BB0750", Offset = "0x6BAF750", VA = "0x6BB0750")]
	public void Commit()
	{
	}

	[Token(Token = "0x6002B5F")]
	[Address(RVA = "0x6BB0780", Offset = "0x6BAF780", VA = "0x6BB0780")]
	public GradientRemap AddUser(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6002B60")]
	[Address(RVA = "0x6BB0FC0", Offset = "0x6BAFFC0", VA = "0x6BB0FC0")]
	public void RemoveUser(VectorImage vi)
	{
	}

	[Token(Token = "0x6002B61")]
	[Address(RVA = "0x6BB08A0", Offset = "0x6BAF8A0", VA = "0x6BB08A0")]
	private VectorImageRenderInfo Register(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x6BB10A0", Offset = "0x6BB00A0", VA = "0x6BB10A0")]
	private void Unregister(VectorImage vi, VectorImageRenderInfo renderInfo)
	{
	}
}
