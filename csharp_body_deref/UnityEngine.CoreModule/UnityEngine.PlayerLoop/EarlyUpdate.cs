using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.PlayerLoop;

[Token(Token = "0x200020D")]
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct EarlyUpdate
{
	[Token(Token = "0x200020E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PollPlayerConnection
	{
	}

	[Token(Token = "0x200020F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PollHtcsPlayerConnection
	{
	}

	[Token(Token = "0x2000210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct GpuTimestamp
	{
	}

	[Token(Token = "0x2000211")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct AnalyticsCoreStatsUpdate
	{
	}

	[Token(Token = "0x2000212")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UnityWebRequestUpdate
	{
	}

	[Token(Token = "0x2000213")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateStreamingManager
	{
	}

	[Token(Token = "0x2000214")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ExecuteMainThreadJobs
	{
	}

	[Token(Token = "0x2000215")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ProcessMouseInWindow
	{
	}

	[Token(Token = "0x2000216")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ClearIntermediateRenderers
	{
	}

	[Token(Token = "0x2000217")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ClearLines
	{
	}

	[Token(Token = "0x2000218")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PresentBeforeUpdate
	{
	}

	[Token(Token = "0x2000219")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ResetFrameStatsAfterPresent
	{
	}

	[Token(Token = "0x200021A")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateAsyncReadbackManager
	{
	}

	[Token(Token = "0x200021B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateTextureStreamingManager
	{
	}

	[Token(Token = "0x200021C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdatePreloading
	{
	}

	[Token(Token = "0x200021D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateContentLoading
	{
	}

	[Token(Token = "0x200021E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct RendererNotifyInvisible
	{
	}

	[Token(Token = "0x200021F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PlayerCleanupCachedData
	{
	}

	[Token(Token = "0x2000220")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateMainGameViewRect
	{
	}

	[Token(Token = "0x2000221")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateCanvasRectTransform
	{
	}

	[Token(Token = "0x2000222")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateInputManager
	{
	}

	[Token(Token = "0x2000223")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ProcessRemoteInput
	{
	}

	[Token(Token = "0x2000224")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct XRUpdate
	{
	}

	[Token(Token = "0x2000225")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ScriptRunDelayedStartupFrame
	{
	}

	[Token(Token = "0x2000226")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct UpdateKinect
	{
	}

	[Token(Token = "0x2000227")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct DeliverIosPlatformEvents
	{
	}

	[Token(Token = "0x2000228")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct DispatchEventQueueEvents
	{
	}

	[Token(Token = "0x2000229")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct Physics2DEarlyUpdate
	{
	}

	[Token(Token = "0x200022A")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PhysicsResetInterpolatedTransformPosition
	{
	}

	[Token(Token = "0x200022B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct SpriteAtlasManagerUpdate
	{
	}

	[Token(Token = "0x200022C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[Obsolete("TangoUpdate has been deprecated. Use ARCoreUpdate instead (UnityUpgradable) -> UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate", false)]
	public struct TangoUpdate
	{
	}

	[Token(Token = "0x200022D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct ARCoreUpdate
	{
	}

	[Token(Token = "0x200022E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct PerformanceAnalyticsUpdate
	{
	}
}
