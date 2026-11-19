// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.StaticCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/StaticCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/StaticCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Cameras;

[Token(Token = "0x20008F6")]
internal class StaticCamera : BaseCamera
{
	[Token(Token = "0x6005546")]
	[Address(RVA = "0x5CD93D0", Offset = "0x5CD83D0", VA = "0x5CD93D0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Cameras/StaticCamera.c (Cameras.StaticCamera$$Awake): 1 lines keep C-only constructs
		Camera __this_00;

		this.Awake();
		__this_00 = this.Camera;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.backgroundColor = (Color)(ZEXT816(0x3f80000000000000) << 0x40);
		return;
	}

	[Token(Token = "0x6005547")]
	[Address(RVA = "0x5CD9400", Offset = "0x5CD8400", VA = "0x5CD9400")]
	public void SetSkybox(bool skybox)
	{
		// Lifted from source/cpp/Cameras/StaticCamera.c (Cameras.StaticCamera$$SetSkybox): 2 lines keep C-only constructs
		Camera __this_00;
		int value;
		undefined7 in_register_00000031;

		__this_00 = this.Camera;
		if ((int)CONCAT71(in_register_00000031, skybox) == 0) {
			value = 2;
		}
		else {
			value = 1;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.clearFlags = value;
		return;
	}

	[Token(Token = "0x6005548")]
	[Address(RVA = "0x5CD9430", Offset = "0x5CD8430", VA = "0x5CD9430")]
	public StaticCamera()
	{
		// Lifted from source/cpp/Cameras/StaticCamera.c (Cameras.StaticCamera$$.ctor): clean
		base();
		return;
	}
}
