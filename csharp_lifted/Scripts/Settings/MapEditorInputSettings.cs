// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F6")]
internal class MapEditorInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Slow;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Fast;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pan;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting Select;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Multiselect;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Deselect;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting RotateCamera;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting AddObject;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting ChangeGizmo;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ToggleSnap;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Delete;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting CopyObjects;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting Paste;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting Cut;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting Undo;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting Redo;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting SaveMap;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting SnapCameraLeft;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting SnapCameraRight;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting SnapCameraUp;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting SnapCameraDown;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting ToggleOrthographic;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x128")]
	public KeybindSetting VertexSnap;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x130")]
	public KeybindSetting BrushReroll;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x138")]
	public KeybindSetting BrushCount;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x140")]
	public KeybindSetting BrushCurve;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x148")]
	public KeybindSetting BrushCurveAxisX;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x150")]
	public KeybindSetting BrushCurveAxisY;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x158")]
	public KeybindSetting BrushCurveAxisZ;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x160")]
	public KeybindSetting BrushCurveAxisNone;

	[Token(Token = "0x170000BD")]
	protected override string FileName
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x5A50F00", Offset = "0x5A4FF00", VA = "0x5A50F00", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/MapEditorInputSettings.c (Settings.MapEditorInputSettings$$get_FileName): clean
			return "MapEditorInput.json";
		}
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x5A4F890", Offset = "0x5A4E890", VA = "0x5A4F890")]
	public MapEditorInputSettings()
	{
		// Lifted from source/cpp/Settings/MapEditorInputSettings.c (Settings.MapEditorInputSettings$$.ctor): 34 lines keep C-only constructs
		String[] pSVar1;
		KeybindSetting pSVar2;

		pSVar1 = (String[])new string[2];
		if (pSVar1 == null) {
	label_05b50ec4: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "W";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "None";
				pSVar2 = new KeybindSetting(pSVar1);
				this.Forward = pSVar2;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_05b50ec4;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "S";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "None";
						pSVar2 = new KeybindSetting(pSVar1);
						this.Back = pSVar2;
						pSVar1 = (String[])new string[2];
						if (pSVar1 == null) goto label_05b50ec4;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "A";
							if ((pSVar1.Length & 0xfffffffe) != 0) {
								pSVar1[1] = "None";
								pSVar2 = new KeybindSetting(pSVar1);
								this.Left = pSVar2;
								pSVar1 = (String[])new string[2];
								if (pSVar1 == null) goto label_05b50ec4;
								if ((int)pSVar1.Length != 0) {
									pSVar1[0] = "D";
									if ((pSVar1.Length & 0xfffffffe) != 0) {
										pSVar1[1] = "None";
										pSVar2 = new KeybindSetting(pSVar1);
										this.Right = pSVar2;
										pSVar1 = (String[])new string[2];
										if (pSVar1 == null) goto label_05b50ec4;
										if ((int)pSVar1.Length != 0) {
											pSVar1[0] = "E";
											if ((pSVar1.Length & 0xfffffffe) != 0) {
												pSVar1[1] = "None";
												pSVar2 = new KeybindSetting(pSVar1);
												this.Up = pSVar2;
												pSVar1 = (String[])new string[2];
												if (pSVar1 == null) goto label_05b50ec4;
												if ((int)pSVar1.Length != 0) {
													pSVar1[0] = "Q";
													if ((pSVar1.Length & 0xfffffffe) != 0) {
														pSVar1[1] = "None";
														pSVar2 = new KeybindSetting(pSVar1);
														this.Down = pSVar2;
														pSVar1 = (String[])new string[2];
														if (pSVar1 == null) goto label_05b50ec4;
														if ((int)pSVar1.Length != 0) {
															pSVar1[0] = "LeftShift";
															if ((pSVar1.Length & 0xfffffffe) != 0) {
																pSVar1[1] = "None";
																pSVar2 = new KeybindSetting(pSVar1);
																this.Slow = pSVar2;
																pSVar1 = (String[])new string[2];
																if (pSVar1 == null) goto label_05b50ec4;
																if ((int)pSVar1.Length != 0) {
																	pSVar1[0] = "LeftAlt";
																	if ((pSVar1.Length & 0xfffffffe) != 0) {
																		pSVar1[1] = "None";
																		pSVar2 = new KeybindSetting(pSVar1);
																		this.Fast = pSVar2;
																		pSVar1 = (String[])new string[2];
																		if (pSVar1 == null) goto label_05b50ec4;
																		if ((int)pSVar1.Length != 0) {
																			pSVar1[0] = "Mouse2";
																			if ((pSVar1.Length & 0xfffffffe) != 0) {
																				pSVar1[1] = "None";
																				pSVar2 = new KeybindSetting(pSVar1);
																				this.Pan = pSVar2;
																				pSVar1 = (String[])new string[2];
																				if (pSVar1 == null) goto label_05b50ec4;
																				if ((int)pSVar1.Length != 0) {
																					pSVar1[0] = "WheelUp";
																					if ((pSVar1.Length & 0xfffffffe) != 0) {
																						pSVar1[1] = "None";
																						pSVar2 = il2cpp_codegen_object_new(typeof(KeybindSetting)) ;
																						pSVar2 = new KeybindSetting(pSVar1);
																						this.ZoomIn = pSVar2;
																						pSVar1 = (String[])new string[2];
																						if (pSVar1 == null) goto label_05b50ec4;
																						if ((int)pSVar1.Length != 0) {
																							pSVar1[0] = "WheelDown";
																							if ((pSVar1.Length & 0xfffffffe) != 0) {
																								pSVar1[1] = "None";
																								pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																								pSVar2 = new KeybindSetting(pSVar1);
																								this.ZoomOut = pSVar2;
																								pSVar1 = (String[])new string[2];
																								if (pSVar1 == null) goto label_05b50ec4;
																								if ((int)pSVar1.Length != 0) {
																									pSVar1[0] = "Mouse0";
																									if ((pSVar1.Length & 0xfffffffe) != 0) {
																										pSVar1[1] = "None";
																										pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																										pSVar2 = new KeybindSetting(pSVar1);
																										this.Select = pSVar2;
																										pSVar1 = (String[])new string[2];
																										if (pSVar1 == null) goto label_05b50ec4;
																										if ((int)pSVar1.Length != 0) {
																											pSVar1[0] = "LeftControl";
																											if ((pSVar1.Length & 0xfffffffe) != 0) {
																												pSVar1[1] = "None";
																												pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1);
																												this.Multiselect = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.Multiselect) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Escape";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																														pSVar2 = new KeybindSetting(pSVar1);
																														this.Deselect = pSVar2;
																														pSVar1 = (String[])new string[2];
																														if (pSVar1 == null) goto label_05b50ec4;
																														if ((int)pSVar1.Length != 0) {
																															pSVar1[0] = "Mouse1";
																															if ((pSVar1.Length & 0xfffffffe) != 0) {
																																pSVar1[1] = "None";
																																pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.RotateCamera = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Space";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.AddObject = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "C";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ChangeGizmo = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "G";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ToggleSnap = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.ToggleSnap) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Delete";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Delete = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+C";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.CopyObjects = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+V";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Paste = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+X";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Cut = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+Z";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Undo = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+Y";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.Redo = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl+S";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SaveMap = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftArrow";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SnapCameraLeft = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "RightArrow";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SnapCameraRight = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "UpArrow";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SnapCameraUp = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "DownArrow";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.SnapCameraDown = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "O";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.ToggleOrthographic = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "V";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.VertexSnap = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.VertexSnap) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "Mouse2";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushReroll = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftShift";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCount = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.BrushCount) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "LeftControl";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCurve = pSVar2;
																												Il2CppCodeGenWriteBarrier(&this.BrushCurve) ;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "1";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCurveAxisX = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "2";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCurveAxisY = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "3";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCurveAxisZ = pSVar2;
																												pSVar1 = (String[])new string[2];
																												if (pSVar1 == null) goto label_05b50ec4;
																												if ((int)pSVar1.Length != 0) {
																													pSVar1[0] = "0";
																													if ((pSVar1.Length & 0xfffffffe) != 0) {
																														pSVar1[1] = "None";
																														pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(KeybindSetting));
																												pSVar2 = new KeybindSetting(pSVar1) ;
																												this.BrushCurveAxisNone = pSVar2;
																												base();
																												return;
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
