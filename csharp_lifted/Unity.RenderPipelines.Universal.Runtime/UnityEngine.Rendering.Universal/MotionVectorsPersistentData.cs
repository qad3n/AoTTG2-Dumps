// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.MotionVectorsPersistentData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000F1")]
internal sealed class MotionVectorsPersistentData
{
	[Token(Token = "0x400057A")]
	private const int k_MaxViewPerPass = 2;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x10")]
	private Matrix4x4[] m_stagingMatrixArray;

	[Token(Token = "0x400057C")]
	private const int k_EyeCount = 4;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x18")]
	private int m_numPreviousViews;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x20")]
	private readonly Matrix4x4[] m_Projection;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Matrix4x4[] m_View;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x30")]
	private readonly Matrix4x4[] m_ViewProjection;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x38")]
	private readonly Matrix4x4[] m_PreviousProjection;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x40")]
	private readonly Matrix4x4[] m_PreviousView;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x48")]
	private readonly Matrix4x4[] m_PreviousViewProjection;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x50")]
	private readonly Matrix4x4[] m_PreviousPreviousProjection;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x58")]
	private readonly Matrix4x4[] m_PreviousPreviousView;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x60")]
	private readonly int[] m_LastFrameIndex;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x68")]
	private readonly float[] m_PrevAspectRatio;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x70")]
	private float m_deltaTime;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x74")]
	private float m_lastDeltaTime;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x78")]
	private Vector3 m_worldSpaceCameraPos;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x84")]
	private Vector3 m_previousWorldSpaceCameraPos;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 m_previousPreviousWorldSpaceCameraPos;

	[Token(Token = "0x170001C8")]
	internal int lastFrameIndex
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x6649020", Offset = "0x6648020", VA = "0x6649020")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C9")]
	internal Matrix4x4 viewProjection
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x6649040", Offset = "0x6648040", VA = "0x6649040")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001CA")]
	internal Matrix4x4 previousViewProjection
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x6649080", Offset = "0x6648080", VA = "0x6649080")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001CB")]
	internal Matrix4x4[] viewProjectionStereo
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x66490C0", Offset = "0x66480C0", VA = "0x66490C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	internal Matrix4x4[] previousViewProjectionStereo
	{
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x66490D0", Offset = "0x66480D0", VA = "0x66490D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	internal Matrix4x4[] stagingMatrixStereo
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x66490E0", Offset = "0x66480E0", VA = "0x66490E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	internal Matrix4x4[] projectionStereo
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x66490F0", Offset = "0x66480F0", VA = "0x66490F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	internal Matrix4x4[] previousProjectionStereo
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x6649100", Offset = "0x6648100", VA = "0x6649100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	internal Matrix4x4[] previousPreviousProjectionStereo
	{
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x6649110", Offset = "0x6648110", VA = "0x6649110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	internal Matrix4x4[] viewStereo
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x6649120", Offset = "0x6648120", VA = "0x6649120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	internal Matrix4x4[] previousViewStereo
	{
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x6649130", Offset = "0x6648130", VA = "0x6649130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	internal Matrix4x4[] previousPreviousViewStereo
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x6649140", Offset = "0x6648140", VA = "0x6649140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	internal float deltaTime
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x6649150", Offset = "0x6648150", VA = "0x6649150")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D5")]
	internal float lastDeltaTime
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x6649160", Offset = "0x6648160", VA = "0x6649160")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D6")]
	internal Vector3 worldSpaceCameraPos
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x6649170", Offset = "0x6648170", VA = "0x6649170")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001D7")]
	internal Vector3 previousWorldSpaceCameraPos
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x6649180", Offset = "0x6648180", VA = "0x6649180")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001D8")]
	internal Vector3 previousPreviousWorldSpaceCameraPos
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x66491A0", Offset = "0x66481A0", VA = "0x66491A0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x6648A90", Offset = "0x6647A90", VA = "0x6648A90")]
	internal MotionVectorsPersistentData()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x6648C40", Offset = "0x6647C40", VA = "0x6648C40")]
	public void Reset()
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x66491C0", Offset = "0x66481C0", VA = "0x66491C0")]
	private static int GetXRMultiPassId(XRPass xr)
	{
		return default(int);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x66491F0", Offset = "0x66481F0", VA = "0x66491F0")]
	public void Update(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x6649A00", Offset = "0x6648A00", VA = "0x6649A00")]
	public void SetGlobalMotionMatrices(RasterCommandBuffer cmd, XRPass xr)
	{
	}
}
