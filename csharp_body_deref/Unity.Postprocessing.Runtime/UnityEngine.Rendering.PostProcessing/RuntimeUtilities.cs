// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.RuntimeUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000085")]
public static class RuntimeUtilities
{
	[Token(Token = "0x2000088")]
	[CompilerGenerated]
	private sealed class _003CGetAllSceneObjects_003Ed__84<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable where T : Component
	{
		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Queue<Transform> _003Cqueue_003E5__2;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private GameObject[] _003C_003E7__wrap2;

		[Token(Token = "0x400026B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x400026C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x1700004A")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6000245")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000247")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000241")]
		[DebuggerHidden]
		public _003CGetAllSceneObjects_003Ed__84(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000242")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000243")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000244")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000246")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000248")]
		[DebuggerHidden]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000249")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Texture2D m_WhiteTexture;

	[Token(Token = "0x4000253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Texture3D m_WhiteTexture3D;

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Texture2D m_BlackTexture;

	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Texture3D m_BlackTexture3D;

	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Texture2D m_TransparentTexture;

	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Texture3D m_TransparentTexture3D;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Dictionary<int, Texture2D> m_LutStrips;

	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static PostProcessResources s_Resources;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Mesh s_FullscreenTriangle;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Material s_CopyStdMaterial;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Material s_CopyStdFromDoubleWideMaterial;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Material s_CopyMaterial;

	[Token(Token = "0x400025E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Material s_CopyFromTexArrayMaterial;

	[Token(Token = "0x400025F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static PropertySheet s_CopySheet;

	[Token(Token = "0x4000260")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static PropertySheet s_CopyFromTexArraySheet;

	[Token(Token = "0x4000261")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static IEnumerable<Type> m_AssemblyTypes;

	[Token(Token = "0x17000035")]
	public static Texture2D whiteTexture
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4B5A1A0", Offset = "0x4B5A1A0", VA = "0x4B5A1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public static Texture3D whiteTexture3D
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x4B61220", Offset = "0x4B61220", VA = "0x4B61220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	public static Texture2D blackTexture
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4B613E0", Offset = "0x4B613E0", VA = "0x4B613E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public static Texture3D blackTexture3D
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4B61560", Offset = "0x4B61560", VA = "0x4B61560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public static Texture2D transparentTexture
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x4B61720", Offset = "0x4B61720", VA = "0x4B61720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	public static Texture3D transparentTexture3D
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4B618A0", Offset = "0x4B618A0", VA = "0x4B618A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public static Mesh fullscreenTriangle
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4B61A60", Offset = "0x4B61A60", VA = "0x4B61A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public static Material copyStdMaterial
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x4B53D30", Offset = "0x4B53D30", VA = "0x4B53D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public static Material copyStdFromDoubleWideMaterial
	{
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x4B57D30", Offset = "0x4B57D30", VA = "0x4B57D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public static Material copyMaterial
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x4B61DD0", Offset = "0x4B61DD0", VA = "0x4B61DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public static Material copyFromTexArrayMaterial
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x4B61F40", Offset = "0x4B61F40", VA = "0x4B61F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000040")]
	public static PropertySheet copySheet
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x4B580B0", Offset = "0x4B580B0", VA = "0x4B580B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public static PropertySheet copyFromTexArraySheet
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x4B57920", Offset = "0x4B57920", VA = "0x4B57920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public static bool scriptableRenderPipelineActive
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x4B4FE20", Offset = "0x4B4FE20", VA = "0x4B4FE20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000043")]
	public static bool supportsDeferredShading
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x4B62F20", Offset = "0x4B62F20", VA = "0x4B62F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public static bool supportsDepthNormals
	{
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x4B62FF0", Offset = "0x4B62FF0", VA = "0x4B62FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000045")]
	public static bool isSinglePassStereoEnabled
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x4B55960", Offset = "0x4B55960", VA = "0x4B55960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000046")]
	public static bool isVREnabled
	{
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x4B630C0", Offset = "0x4B630C0", VA = "0x4B630C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public static bool isAndroidOpenGL
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x4B499A0", Offset = "0x4B499A0", VA = "0x4B499A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public static RenderTextureFormat defaultHDRRenderTextureFormat
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x4B532D0", Offset = "0x4B532D0", VA = "0x4B532D0")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x17000049")]
	public static bool isLinearColorSpace
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x4B4A4D0", Offset = "0x4B4A4D0", VA = "0x4B4A4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4B4BD40", Offset = "0x4B4BD40", VA = "0x4B4BD40")]
	public static Texture2D GetLutStrip(int size)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4B56600", Offset = "0x4B56600", VA = "0x4B56600")]
	internal static bool isValidResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4B56680", Offset = "0x4B56680", VA = "0x4B56680")]
	internal static void UpdateResources(PostProcessResources resources)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4B620B0", Offset = "0x4B620B0", VA = "0x4B620B0")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4B62110", Offset = "0x4B62110", VA = "0x4B62110")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4B62170", Offset = "0x4B62170", VA = "0x4B62170")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4B4AFC0", Offset = "0x4B4AFC0", VA = "0x4B4AFC0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4B62230", Offset = "0x4B62230", VA = "0x4B62230")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, RenderBufferLoadAction loadAction, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4B495A0", Offset = "0x4B495A0", VA = "0x4B495A0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4B57EA0", Offset = "0x4B57EA0", VA = "0x4B57EA0")]
	public static void BlitFullscreenTriangleFromDoubleWide(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material material, int pass, int eye)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4B5AAB0", Offset = "0x4B5AAB0", VA = "0x4B5AAB0")]
	public static void BlitFullscreenTriangleToDoubleWide(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, int eye)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4B57A90", Offset = "0x4B57A90", VA = "0x4B57A90")]
	public static void BlitFullscreenTriangleFromTexArray(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, bool clear = false, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4B5A850", Offset = "0x4B5A850", VA = "0x4B5A850")]
	public static void BlitFullscreenTriangleToTexArray(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, bool clear = false, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4B625D0", Offset = "0x4B625D0", VA = "0x4B625D0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, RenderTargetIdentifier depth, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4B629B0", Offset = "0x4B629B0", VA = "0x4B629B0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier[] destinations, RenderTargetIdentifier depth, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4B62C20", Offset = "0x4B62C20", VA = "0x4B62C20")]
	public static void BuiltinBlit(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4B53EA0", Offset = "0x4B53EA0", VA = "0x4B53EA0")]
	public static void BuiltinBlit(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material mat, int pass = 0)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4B62D30", Offset = "0x4B62D30", VA = "0x4B62D30")]
	public static void CopyTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4B532E0", Offset = "0x4B532E0", VA = "0x4B532E0")]
	public static bool isFloatingPointFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4B5A320", Offset = "0x4B5A320", VA = "0x4B5A320")]
	internal static bool hasAlpha(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4B49A10", Offset = "0x4B49A10", VA = "0x4B49A10")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4B630D0", Offset = "0x4B630D0", VA = "0x4B630D0")]
	public static bool IsResolvedDepthAvailable(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4B63130", Offset = "0x4B63130", VA = "0x4B63130")]
	public static void DestroyProfile(PostProcessProfile profile, bool destroyEffects)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4B633C0", Offset = "0x4B633C0", VA = "0x4B633C0")]
	public static void DestroyVolume(PostProcessVolume volume, bool destroyProfile, bool destroyGameObject = false)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4B63600", Offset = "0x4B63600", VA = "0x4B63600")]
	public static bool IsPostProcessingActive(PostProcessLayer layer)
	{
		return default(bool);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4B63670", Offset = "0x4B63670", VA = "0x4B63670")]
	public static bool IsTemporalAntialiasingActive(PostProcessLayer layer)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4B50180", Offset = "0x4B50180", VA = "0x4B50180")]
	public static bool IsDynamicResolutionEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[IteratorStateMachine(typeof(_003CGetAllSceneObjects_003Ed__84<>))]
	public static IEnumerable<T> GetAllSceneObjects<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	public static void CreateIfNull<T>(ref T obj) where T : class, new()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4B49590", Offset = "0x4B49590", VA = "0x4B49590")]
	public static float Exp2(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4B63770", Offset = "0x4B63770", VA = "0x4B63770")]
	public static Matrix4x4 GetJitteredPerspectiveProjectionMatrix(Camera camera, Vector2 offset)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4B63940", Offset = "0x4B63940", VA = "0x4B63940")]
	public static Matrix4x4 GetJitteredOrthographicProjectionMatrix(Camera camera, Vector2 offset)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4B63AA0", Offset = "0x4B63AA0", VA = "0x4B63AA0")]
	public static Matrix4x4 GenerateJitteredProjectionMatrixFromOriginal(PostProcessRenderContext context, Matrix4x4 origProj, Vector2 jitter)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4B63BC0", Offset = "0x4B63BC0", VA = "0x4B63BC0")]
	public static IEnumerable<Type> GetAllAssemblyTypes()
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	public static IEnumerable<Type> GetAllTypesDerivedFrom<T>()
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	public static T GetAttribute<T>(this Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	public static Attribute[] GetMemberAttributes<TType, TValue>(Expression<Func<TType, TValue>> expr)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	public static string GetFieldPath<TType, TValue>(Expression<Func<TType, TValue>> expr)
	{
		return null;
	}
}
