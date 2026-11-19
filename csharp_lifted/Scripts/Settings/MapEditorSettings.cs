// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F8")]
internal class MapEditorSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CurrentMap;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraMoveSpeed;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CameraSlowMoveSpeed;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CameraFastMoveSpeed;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting CameraRotateSpeed;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting RenderDistance;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting SnapMove;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting SnapRotate;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting SnapScale;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting PlacementDistance;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting PlaceOnFirstSurface;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting HierarchyPanelWidth;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting InspectorPanelWidth;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting HUDScale;

	[Token(Token = "0x170000BF")]
	protected override string FileName
	{
		[Token(Token = "0x6000547")]
		[Address(RVA = "0x5A50F60", Offset = "0x5A4FF60", VA = "0x5A50F60", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/MapEditorSettings.c (Settings.MapEditorSettings$$get_FileName): clean
			return "MapEditor.json";
		}
	}

	[Token(Token = "0x170000C0")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x6000548")]
		[Address(RVA = "0x5A50F90", Offset = "0x5A4FF90", VA = "0x5A50F90", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Settings/MapEditorSettings.c (Settings.MapEditorSettings$$get_CurrentVersion): clean
			return 1;
		}
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x5A50FA0", Offset = "0x5A4FFA0", VA = "0x5A50FA0", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		// Lifted from source/cpp/Settings/MapEditorSettings.c (Settings.MapEditorSettings$$Migrate): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		IntSetting pSVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075472b5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075472b5 = true;
		}
		__this_00 = (HashSet<object>)this.FoundSettings;
		if (__this_00 == null) {
	label_05b5101f: ;
			throw new NullReferenceException();
		}
		bVar2 = __this_00.Contains((Il2CppObject *)"RenderDistance");
		if ((bVar2) && (fromVersion < 1)) {
			pSVar1 = this.RenderDistance;
			if (pSVar1 == null) goto label_05b5101f;
			pSVar1.SetDefault();
		}
		return bVar2;
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x5A51030", Offset = "0x5A50030", VA = "0x5A51030", Slot = "12")]
	public override void Apply()
	{
		// Lifted from source/cpp/Settings/MapEditorSettings.c (Settings.MapEditorSettings$$Apply): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MapEditorCamera __this_00;
		MapEditorMenu __this_01;

		__this_00 = (MapEditorCamera)SceneLoader.CurrentCamera;
		if (__this_00 != null) {
			bVar1 = (typeof(MapEditorCamera)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorCamera))) {
				__this_00.ApplyGraphicsSettings();
				uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05b510c6;
			}
		}
		uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05b510c6: ;
		if (uVar2 == 0) {
			__this_01 = (MapEditorMenu)UIManager.CurrentMenu;
		}
		else {
			__this_01 = *(MapEditorMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_01 != null) {
			bVar1 = ((typeof(MapEditorMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(MapEditorMenu))) {
				__this_01.ApplyHUDScale();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x5A51140", Offset = "0x5A50140", VA = "0x5A51140")]
	public MapEditorSettings()
	{
		// Lifted from source/cpp/Settings/MapEditorSettings.c (Settings.MapEditorSettings$$.ctor): clean
		String defaultValue;
		int iVar1;
		StringSetting __this_00;
		FloatSetting pSVar2;
		IntSetting __this_01;
		BoolSetting __this_02;
		float fVar3;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 100);
		this.CurrentMap = __this_00;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(250.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.CameraMoveSpeed = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(50.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.CameraSlowMoveSpeed = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(750.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.CameraFastMoveSpeed = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(300.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.CameraRotateSpeed = pSVar2;
		__this_01.MinValue = -0x80000000;
		__this_01.MaxValue = 0x7fffffff;
		__this_01 = new IntSetting();
		__this_01.MinValue = 10;
		__this_01.MaxValue = 1000000;
		iVar1 = __this_01.SanitizeValue(10000);
		__this_01.DefaultValue = iVar1;
		__this_01.SetDefault();
		this.RenderDistance = __this_01;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(10.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.SnapMove = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(15.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.SnapRotate = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(0.1);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.SnapScale = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar3 = pSVar2.SanitizeValue(50.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.PlacementDistance = pSVar2;
		__this_02 = new BoolSetting(true);
		this.PlaceOnFirstSurface = __this_02;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 150.0;
		pSVar2.MaxValue = 600.0;
		fVar3 = pSVar2.SanitizeValue(325.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.HierarchyPanelWidth = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 200.0;
		pSVar2.MaxValue = 700.0;
		fVar3 = pSVar2.SanitizeValue(400.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.InspectorPanelWidth = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.4;
		pSVar2.MaxValue = 2.0;
		fVar3 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar3;
		pSVar2.SetDefault();
		this.HUDScale = pSVar2;
		base();
		return;
	}
}
