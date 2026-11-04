// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.VectorImageManager
// Update status: CHANGED in this game update
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

[Token(Token = "0x20005E3")]
internal class VectorImageManager : IDisposable
{
	[Token(Token = "0x40015E1")]
	[FieldOffset(Offset = "0x0")]
	public static List<VectorImageManager> instances;

	[Token(Token = "0x40015E2")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_MarkerRegister;

	[Token(Token = "0x40015E3")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker s_MarkerUnregister;

	[Token(Token = "0x40015E4")]
	[FieldOffset(Offset = "0x10")]
	private readonly AtlasBase m_Atlas;

	[Token(Token = "0x40015E5")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<VectorImage, VectorImageRenderInfo> m_Registered;

	[Token(Token = "0x40015E6")]
	[FieldOffset(Offset = "0x20")]
	private VectorImageRenderInfoPool m_RenderInfoPool;

	[Token(Token = "0x40015E7")]
	[FieldOffset(Offset = "0x28")]
	private GradientRemapPool m_GradientRemapPool;

	[Token(Token = "0x40015E8")]
	[FieldOffset(Offset = "0x30")]
	private GradientSettingsAtlas m_GradientSettingsAtlas;

	[Token(Token = "0x40015E9")]
	[FieldOffset(Offset = "0x38")]
	private bool m_LoggedExhaustedSettingsAtlas;

	[Token(Token = "0x17000AA9")]
	public Texture2D atlas
	{
		[Token(Token = "0x6002B8D")]
		[Address(RVA = "0x31B7260", Offset = "0x31B5860", VA = "0x1831B7260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AAA")]
	protected bool disposed
	{
		[Token(Token = "0x6002B8F")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B90")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B8E")]
	[Address(RVA = "0x31B6D10", Offset = "0x31B5310", VA = "0x1831B6D10")]
	public VectorImageManager(AtlasBase atlas)
	{
	}

	[Token(Token = "0x6002B91")]
	[Address(RVA = "0x31B6350", Offset = "0x31B4950", VA = "0x1831B6350", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B92")]
	[Address(RVA = "0x31B6230", Offset = "0x31B4830", VA = "0x1831B6230", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B93")]
	[Address(RVA = "0x31B6200", Offset = "0x31B4800", VA = "0x1831B6200")]
	public void Commit()
	{
	}

	[Token(Token = "0x6002B94")]
	[Address(RVA = "0x31B60B0", Offset = "0x31B46B0", VA = "0x1831B60B0")]
	public GradientRemap AddUser(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6002B95")]
	[Address(RVA = "0x31B68A0", Offset = "0x31B4EA0", VA = "0x1831B68A0")]
	public void RemoveUser(VectorImage vi)
	{
	}

	[Token(Token = "0x6002B96")]
	[Address(RVA = "0x31B63B0", Offset = "0x31B49B0", VA = "0x1831B63B0")]
	private VectorImageRenderInfo Register(VectorImage vi, VisualElement context)
	{
		return null;
	}

	[Token(Token = "0x6002B97")]
	[Address(RVA = "0x31B6AC0", Offset = "0x31B50C0", VA = "0x1831B6AC0")]
	private void Unregister(VectorImage vi, VectorImageRenderInfo renderInfo)
	{
	}
}
