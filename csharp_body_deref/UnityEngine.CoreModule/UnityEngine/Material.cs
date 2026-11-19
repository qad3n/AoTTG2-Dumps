// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Material
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Material.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public class Material : Object
{
	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int k_ColorId;

	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static readonly int k_MainTexId;

	[Token(Token = "0x17000122")]
	public Shader shader
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x68DD0C0", Offset = "0x68DC0C0", VA = "0x68DD0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x68DD1D0", Offset = "0x68DC1D0", VA = "0x68DD1D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public Color color
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x68DD310", Offset = "0x68DC310", VA = "0x68DD310")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x68DD450", Offset = "0x68DC450", VA = "0x68DD450")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public Texture mainTexture
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x68DD4E0", Offset = "0x68DC4E0", VA = "0x68DD4E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x68DD560", Offset = "0x68DC560", VA = "0x68DD560")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public Vector2 mainTextureOffset
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x68DD5E0", Offset = "0x68DC5E0", VA = "0x68DD5E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x68DD660", Offset = "0x68DC660", VA = "0x68DD660")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public Vector2 mainTextureScale
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x68DD6F0", Offset = "0x68DC6F0", VA = "0x68DD6F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x68DD770", Offset = "0x68DC770", VA = "0x68DD770")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public int renderQueue
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x68DDA70", Offset = "0x68DCA70", VA = "0x68DDA70")]
		[UnityEngine.Bindings.NativeName("GetActualRenderQueue")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x68DDB50", Offset = "0x68DCB50", VA = "0x68DDB50")]
		[UnityEngine.Bindings.NativeName("SetCustomRenderQueue")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public LocalKeyword[] enabledKeywords
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x68DE750", Offset = "0x68DD750", VA = "0x68DE750")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public MaterialGlobalIlluminationFlags globalIlluminationFlags
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x68DE760", Offset = "0x68DD760", VA = "0x68DE760")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	[UnityEngine.Bindings.NativeProperty("EnableInstancingVariants")]
	public bool enableInstancing
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x68DE860", Offset = "0x68DD860", VA = "0x68DE860")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x68DE940", Offset = "0x68DD940", VA = "0x68DE940")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public int passCount
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x68DEA40", Offset = "0x68DDA40", VA = "0x68DEA40")]
		[UnityEngine.Bindings.NativeName("GetShader()->GetPassCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012C")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x68DF440", Offset = "0x68DE440", VA = "0x68DF440")]
		get
		{
			return null;
		}
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x68DF450", Offset = "0x68DE450", VA = "0x68DF450")]
		set
		{
		}
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x68DCCF0", Offset = "0x68DBCF0", VA = "0x68DCCF0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithShader")]
	private static void CreateWithShader([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull] Shader shader)
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x68DCE20", Offset = "0x68DBE20", VA = "0x68DCE20")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithMaterial")]
	private static void CreateWithMaterial([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull] Material source)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x68DCF50", Offset = "0x68DBF50", VA = "0x68DCF50")]
	public Material(Shader shader)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x68DCFD0", Offset = "0x68DBFD0", VA = "0x68DCFD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Material(Material source)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x68DD050", Offset = "0x68DC050", VA = "0x68DD050")]
	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public Material(string contents)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x68DD380", Offset = "0x68DC380", VA = "0x68DD380")]
	[UnityEngine.Bindings.NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag)
	{
		return default(int);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x68DD840", Offset = "0x68DC840", VA = "0x68DD840")]
	[UnityEngine.Bindings.NativeName("HasPropertyFromScript")]
	public bool HasProperty(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x68DD940", Offset = "0x68DC940", VA = "0x68DD940")]
	public bool HasProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x68DD960", Offset = "0x68DC960", VA = "0x68DD960")]
	[UnityEngine.Bindings.NativeName("HasFloatFromScript")]
	private bool HasFloatImpl(int name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x68DDA60", Offset = "0x68DCA60", VA = "0x68DDA60")]
	public bool HasFloat(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x68DDC50", Offset = "0x68DCC50", VA = "0x68DDC50")]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x68DDE60", Offset = "0x68DCE60", VA = "0x68DDE60")]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x68DE070", Offset = "0x68DD070", VA = "0x68DE070")]
	public bool IsKeywordEnabled(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x68DE290", Offset = "0x68DD290", VA = "0x68DE290")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::EnableKeyword", HasExplicitThis = true)]
	private void EnableLocalKeyword(LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x68DE3A0", Offset = "0x68DD3A0", VA = "0x68DE3A0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::DisableKeyword", HasExplicitThis = true)]
	private void DisableLocalKeyword(LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x68DE4B0", Offset = "0x68DD4B0", VA = "0x68DE4B0")]
	public void EnableKeyword(in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x68DE580", Offset = "0x68DD580", VA = "0x68DE580")]
	public void DisableKeyword(in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x68DE650", Offset = "0x68DD650", VA = "0x68DE650")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetEnabledKeywords", HasExplicitThis = true)]
	private void SetEnabledKeywords(LocalKeyword[] keywords)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x68DEB20", Offset = "0x68DDB20", VA = "0x68DEB20")]
	public int FindPass(string passName)
	{
		return default(int);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x68DED30", Offset = "0x68DDD30", VA = "0x68DED30")]
	public void SetOverrideTag(string tag, string val)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x68DF020", Offset = "0x68DE020", VA = "0x68DF020")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
	public bool SetPass(int pass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x68DF120", Offset = "0x68DE120", VA = "0x68DF120")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
	public void CopyPropertiesFromMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x68DF260", Offset = "0x68DE260", VA = "0x68DF260")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
	private string[] GetShaderKeywords()
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x68DF340", Offset = "0x68DE340", VA = "0x68DF340")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x68DF460", Offset = "0x68DE460", VA = "0x68DF460")]
	public int ComputeCRC()
	{
		return default(int);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x68DF540", Offset = "0x68DE540", VA = "0x68DF540")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x68DF650", Offset = "0x68DE650", VA = "0x68DF650")]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x68DF760", Offset = "0x68DE760", VA = "0x68DF760")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x68DF870", Offset = "0x68DE870", VA = "0x68DF870")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x68DF980", Offset = "0x68DE980", VA = "0x68DF980")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	private void SetTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x68DFAC0", Offset = "0x68DEAC0", VA = "0x68DFAC0")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	private void SetGraphicsBufferImpl(int name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x68DFBD0", Offset = "0x68DEBD0", VA = "0x68DFBD0")]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x68DFD00", Offset = "0x68DED00", VA = "0x68DFD00")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x68DFE00", Offset = "0x68DEE00", VA = "0x68DFE00")]
	[UnityEngine.Bindings.NativeName("GetColorFromScript")]
	private Color GetColorImpl(int name)
	{
		return default(Color);
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x68DFF20", Offset = "0x68DEF20", VA = "0x68DFF20")]
	[UnityEngine.Bindings.NativeName("GetTextureFromScript")]
	private Texture GetTextureImpl(int name)
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x68E0040", Offset = "0x68DF040", VA = "0x68E0040")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetFloatArray", HasExplicitThis = true)]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x68E01D0", Offset = "0x68DF1D0", VA = "0x68E01D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetVectorArray", HasExplicitThis = true)]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x68E0360", Offset = "0x68DF360", VA = "0x68E0360")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetMatrixArray", HasExplicitThis = true)]
	private void SetMatrixArrayImpl(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x68E04F0", Offset = "0x68DF4F0", VA = "0x68E04F0")]
	[UnityEngine.Bindings.NativeName("GetTextureScaleAndOffsetFromScript")]
	private Vector4 GetTextureScaleAndOffsetImpl(int name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x68E0610", Offset = "0x68DF610", VA = "0x68E0610")]
	[UnityEngine.Bindings.NativeName("SetTextureOffsetFromScript")]
	private void SetTextureOffsetImpl(int name, Vector2 offset)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x68E0720", Offset = "0x68DF720", VA = "0x68E0720")]
	[UnityEngine.Bindings.NativeName("SetTextureScaleFromScript")]
	private void SetTextureScaleImpl(int name, Vector2 scale)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x68E0830", Offset = "0x68DF830", VA = "0x68E0830")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x68E08F0", Offset = "0x68DF8F0", VA = "0x68E08F0")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x68E09B0", Offset = "0x68DF9B0", VA = "0x68E09B0")]
	private void SetMatrixArray(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x68E0A70", Offset = "0x68DFA70", VA = "0x68E0A70")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x68E0AA0", Offset = "0x68DFAA0", VA = "0x68E0AA0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x68E0AD0", Offset = "0x68DFAD0", VA = "0x68E0AD0")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x68E0AE0", Offset = "0x68DFAE0", VA = "0x68E0AE0")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x68E0AF0", Offset = "0x68DFAF0", VA = "0x68E0AF0")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x68DD4D0", Offset = "0x68DC4D0", VA = "0x68DD4D0")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x68E0B30", Offset = "0x68DFB30", VA = "0x68E0B30")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x68E0B70", Offset = "0x68DFB70", VA = "0x68E0B70")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x68E0B80", Offset = "0x68DFB80", VA = "0x68E0B80")]
	public void SetMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x68E0C80", Offset = "0x68DFC80", VA = "0x68E0C80")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x68E0D70", Offset = "0x68DFD70", VA = "0x68E0D70")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x68DD5D0", Offset = "0x68DC5D0", VA = "0x68DD5D0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x68E0DA0", Offset = "0x68DFDA0", VA = "0x68E0DA0")]
	public void SetBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x68E0DD0", Offset = "0x68DFDD0", VA = "0x68E0DD0")]
	public void SetBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x68E0DE0", Offset = "0x68DFDE0", VA = "0x68E0DE0")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x68E0DF0", Offset = "0x68DFDF0", VA = "0x68E0DF0")]
	public void SetFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x68E0E10", Offset = "0x68DFE10", VA = "0x68E0E10")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x68E0E50", Offset = "0x68DFE50", VA = "0x68E0E50")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x68E0E70", Offset = "0x68DFE70", VA = "0x68E0E70")]
	public void SetMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x68E0E90", Offset = "0x68DFE90", VA = "0x68E0E90")]
	public int GetInt(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x68E0EB0", Offset = "0x68DFEB0", VA = "0x68E0EB0")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x68E0ED0", Offset = "0x68DFED0", VA = "0x68E0ED0")]
	public float GetFloat(int nameID)
	{
		return default(float);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x68E0EE0", Offset = "0x68DFEE0", VA = "0x68E0EE0")]
	public Color GetColor(string name)
	{
		return default(Color);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x68DD440", Offset = "0x68DC440", VA = "0x68DD440")]
	public Color GetColor(int nameID)
	{
		return default(Color);
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x68E0F00", Offset = "0x68DFF00", VA = "0x68E0F00")]
	public Vector4 GetVector(string name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x68E0F20", Offset = "0x68DFF20", VA = "0x68E0F20")]
	public Vector4 GetVector(int nameID)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x68E0F30", Offset = "0x68DFF30", VA = "0x68E0F30")]
	public Texture GetTexture(string name)
	{
		return null;
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x68DD550", Offset = "0x68DC550", VA = "0x68DD550")]
	public Texture GetTexture(int nameID)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x68E0F50", Offset = "0x68DFF50", VA = "0x68E0F50")]
	public void SetTextureOffset(string name, Vector2 value)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x68DD6E0", Offset = "0x68DC6E0", VA = "0x68DD6E0")]
	public void SetTextureOffset(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x68E0F80", Offset = "0x68DFF80", VA = "0x68E0F80")]
	public void SetTextureScale(string name, Vector2 value)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x68DD7F0", Offset = "0x68DC7F0", VA = "0x68DD7F0")]
	public void SetTextureScale(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x68E0FB0", Offset = "0x68DFFB0", VA = "0x68E0FB0")]
	public Vector2 GetTextureOffset(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x68DD650", Offset = "0x68DC650", VA = "0x68DD650")]
	public Vector2 GetTextureOffset(int nameID)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x68E0FD0", Offset = "0x68DFFD0", VA = "0x68E0FD0")]
	public Vector2 GetTextureScale(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x68DD760", Offset = "0x68DC760", VA = "0x68DD760")]
	public Vector2 GetTextureScale(int nameID)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x68DCDE0", Offset = "0x68DBDE0", VA = "0x68DCDE0")]
	private static extern void CreateWithShader_Injected([UnityEngine.Writable] Material self, IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x68DCF10", Offset = "0x68DBF10", VA = "0x68DCF10")]
	private static extern void CreateWithMaterial_Injected([UnityEngine.Writable] Material self, IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x68DD1A0", Offset = "0x68DC1A0", VA = "0x68DD1A0")]
	private static extern IntPtr get_shader_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x68DD2D0", Offset = "0x68DC2D0", VA = "0x68DD2D0")]
	private static extern void set_shader_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x68DD800", Offset = "0x68DC800", VA = "0x68DD800")]
	private static extern int GetFirstPropertyNameIdByAttribute_Injected(IntPtr _unity_self, ShaderPropertyFlags attributeFlag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x68DD900", Offset = "0x68DC900", VA = "0x68DD900")]
	private static extern bool HasProperty_Injected(IntPtr _unity_self, int nameID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x68DDA20", Offset = "0x68DCA20", VA = "0x68DDA20")]
	private static extern bool HasFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x68DDB20", Offset = "0x68DCB20", VA = "0x68DDB20")]
	private static extern int get_renderQueue_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x68DDC10", Offset = "0x68DCC10", VA = "0x68DDC10")]
	private static extern void set_renderQueue_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x68DDE20", Offset = "0x68DCE20", VA = "0x68DDE20")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x68DE030", Offset = "0x68DD030", VA = "0x68DE030")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x68DE250", Offset = "0x68DD250", VA = "0x68DE250")]
	private static extern bool IsKeywordEnabled_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x68DE360", Offset = "0x68DD360", VA = "0x68DE360")]
	private static extern void EnableLocalKeyword_Injected(IntPtr _unity_self, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x68DE470", Offset = "0x68DD470", VA = "0x68DE470")]
	private static extern void DisableLocalKeyword_Injected(IntPtr _unity_self, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x68DE710", Offset = "0x68DD710", VA = "0x68DE710")]
	private static extern void SetEnabledKeywords_Injected(IntPtr _unity_self, LocalKeyword[] keywords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x68DE820", Offset = "0x68DD820", VA = "0x68DE820")]
	private static extern void set_globalIlluminationFlags_Injected(IntPtr _unity_self, MaterialGlobalIlluminationFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x68DE910", Offset = "0x68DD910", VA = "0x68DE910")]
	private static extern bool get_enableInstancing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x68DEA00", Offset = "0x68DDA00", VA = "0x68DEA00")]
	private static extern void set_enableInstancing_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x68DEAF0", Offset = "0x68DDAF0", VA = "0x68DEAF0")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x68DECF0", Offset = "0x68DDCF0", VA = "0x68DECF0")]
	private static extern int FindPass_Injected(IntPtr _unity_self, ref ManagedSpanWrapper passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x68DEFE0", Offset = "0x68DDFE0", VA = "0x68DEFE0")]
	private static extern void SetOverrideTag_Injected(IntPtr _unity_self, ref ManagedSpanWrapper tag, ref ManagedSpanWrapper val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x68DF0E0", Offset = "0x68DE0E0", VA = "0x68DF0E0")]
	private static extern bool SetPass_Injected(IntPtr _unity_self, int pass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x68DF220", Offset = "0x68DE220", VA = "0x68DF220")]
	private static extern void CopyPropertiesFromMaterial_Injected(IntPtr _unity_self, IntPtr mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x68DF310", Offset = "0x68DE310", VA = "0x68DF310")]
	private static extern string[] GetShaderKeywords_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x68DF400", Offset = "0x68DE400", VA = "0x68DF400")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x68DF510", Offset = "0x68DE510", VA = "0x68DF510")]
	private static extern int ComputeCRC_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069F")]
	[Address(RVA = "0x68DF610", Offset = "0x68DE610", VA = "0x68DF610")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x68DF720", Offset = "0x68DE720", VA = "0x68DF720")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x68DF830", Offset = "0x68DE830", VA = "0x68DF830")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x68DF940", Offset = "0x68DE940", VA = "0x68DF940")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x68DFA80", Offset = "0x68DEA80", VA = "0x68DFA80")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x68DFB90", Offset = "0x68DEB90", VA = "0x68DFB90")]
	private static extern void SetGraphicsBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x68DFCB0", Offset = "0x68DECB0", VA = "0x68DFCB0")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x68DFDC0", Offset = "0x68DEDC0", VA = "0x68DFDC0")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x68DFEE0", Offset = "0x68DEEE0", VA = "0x68DFEE0")]
	private static extern void GetColorImpl_Injected(IntPtr _unity_self, int name, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x68E0000", Offset = "0x68DF000", VA = "0x68E0000")]
	private static extern IntPtr GetTextureImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x68E0180", Offset = "0x68DF180", VA = "0x68E0180")]
	private static extern void SetFloatArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x68E0310", Offset = "0x68DF310", VA = "0x68E0310")]
	private static extern void SetVectorArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x68E04A0", Offset = "0x68DF4A0", VA = "0x68E04A0")]
	private static extern void SetMatrixArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x68E05D0", Offset = "0x68DF5D0", VA = "0x68E05D0")]
	private static extern void GetTextureScaleAndOffsetImpl_Injected(IntPtr _unity_self, int name, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x68E06E0", Offset = "0x68DF6E0", VA = "0x68E06E0")]
	private static extern void SetTextureOffsetImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x68E07F0", Offset = "0x68DF7F0", VA = "0x68E07F0")]
	private static extern void SetTextureScaleImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 scale);
}
